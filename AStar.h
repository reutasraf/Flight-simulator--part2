#ifndef PART2_ASTAR_H
#define PART2_ASTAR_H

#endif //PART2_ASTAR_H

#include "Searcher.h"
#include "algorithm"
using namespace std;

template <class T>
class AStar:public Searcher<T>{
    int nodeThatEleveted = 0;
    vector<State<T>*> open1;
    virtual int getNumberOfNodesEvaluated(){
        return this->nodeThatEleveted;
    }
/**
 * search for the shortest
 * @param searchable
 * @return the path
 */
    vector<State<T>*> search(Searchable<T> *searchable) {
        open1.clear();
        nodeThatEleveted = 0;
        vector<State<T>*> close;
        State<T>* goal = searchable->getGoalState();
        State<T>* start = searchable->getInitialState();


        double f = abs(start->getState().getRow()-goal->getState().getRow())
                   +abs(start->getState().getColumn()-goal->getState().getColumn());

        start->setShortestPathVal(start->getCost());
        this->open1.push_back(start);


        while(!this->open1.empty()){
            State<T>* current = this->minimalVal(goal);
            current->setVisited();
            close.push_back(current);


            if(current->Equal(goal)){
                break;
            }
            this->nodeThatEleveted++;

            vector<State<T>*> adj = searchable->getAllPossibleStates(current);
            while (!adj.empty()){
                State<T>* temp = adj.back();
                adj.pop_back();
                if(temp->ifVisited()){
                    continue;
                }

                double pathFromCurrent = current->getShortestPathVal()+temp->getCost();
                if( find(this->open1.begin(),this->open1.end(),temp)!=this->open1.end()){
                    if(temp->getShortestPathVal()<pathFromCurrent){
                        continue;
                    }
                }else if(find(close.begin(),close.end(),temp)!=close.end()){
                    if(temp->getShortestPathVal()<pathFromCurrent) {
                        continue;
                    }
                    //this->popFrom(temp,&close);
                    //open1.push_back(temp);
                }else{
                    this->open1.push_back(temp);
                }
                temp->setShortestPathVal(pathFromCurrent);
                temp->setCameFrom(current);
            }


        }


        vector<State<T>*> returnVal;
        State<T>* currentState = searchable->getGoalState();
        State<T>* beginState = searchable->getInitialState();
        if(currentState->getDad()==NULL){
            return returnVal;
        }
        //loop that create the path
        while (!beginState->Equal(currentState)){
            returnVal.push_back(currentState);
            currentState = currentState->getDad();
        }
        returnVal.push_back(searchable->getInitialState());

        std::reverse(returnVal.begin(),returnVal.end());

        /*
        cout<<"astar"<<endl;
        cout<<goal->getShortestPathVal()<<endl;
        cout<<this->nodeThatEleveted<<endl;*/
        return returnVal;
    }

    /**
     * the priority queue
     * @param goal
     * @return
     */
    State<T>* minimalVal(State<T>* goal) {
        vector<State<T>*> temp;

        State<T>* lowest = open1.back();
        open1.pop_back();


        double huristic = abs(lowest->getState().getRow() - goal->getState().getRow())
                        +abs(lowest->getState().getColumn() - goal->getState().getColumn());
        double first = huristic + lowest->getShortestPathVal();

        while(!this->open1.empty()){
            State<T>* state = open1.back();
            open1.pop_back();


            huristic = abs(state->getState().getRow()- goal->getState().getRow())
                    +abs(state->getState().getColumn() - goal->getState().getColumn());
            double newCost = huristic + state->getShortestPathVal();

            if(newCost<first){
                first = newCost;
                temp.push_back(lowest);
                lowest = state;
                continue;
            }
            temp.push_back(state);

        }

        for(int i = 0 ; i < temp.size();i++){
            this->open1.push_back(temp[i]);
        }

        return lowest;
    }

    void popFrom(State<T>* temp,vector<State<T>*>* close){
        vector<State<T>*> move;
        typename vector<State<T>*>::iterator it;
        it = close->begin();
        for(;it !=close->end();++it){
            State<T>* now = close->back();
            close->pop_back();
            move.push_back(now);
            if(now->Equal(temp)){
                this->open1.push_back(now);
                return;
            }
        }

    }

};