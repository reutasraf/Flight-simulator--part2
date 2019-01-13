#ifndef PART2_ASTAR_H
#define PART2_ASTAR_H

#endif //PART2_ASTAR_H

#include "Searcher.h"
#include "algorithm"
using namespace std;

template <class T>
class AStar:public Searcher<T>{
    int nodeThatEleveted = 0 ;
    vector<State<T>*> open1;
    virtual int getNumberOfNodeElevatde(){
        return this->nodeThatEleveted;
    }

    vector<State<T>*> tempMyAStar(Searchable<T> *searchable){

        vector<State<T>*> close;
        State<T>* goal = searchable->getGoalState();
        State<T>* start = searchable->getInitalState();


        double f = abs(start->getState().getRow()-goal->getState().getRow())
                +abs(start->getState().getColumn()-goal->getState().getColumn());

        start->setShortestPathVal(start->getCost());
        this->open1.push_back(start);


        while(!this->open1.empty()){
            State<T>* current = this->lowestVal(goal);


            this->nodeThatEleveted++;
            if(current->Equals(goal)){
                break;
            }

            vector<State<T>*> adj = searchable->getAllPossibleStates(current);
            while (!adj.empty()){
                State<T>* temp = adj.back();
                adj.pop_back();

                double pathFromCurrent = current->getShortestPathVal()+temp->getCost();
                if( find(this->open1.begin(),this->open1.end(),temp)!=this->open1.end()){
                    if(temp->getShortestPathVal()<pathFromCurrent){
                        continue;
                    }
                }else if(find(close.begin(),close.end(),temp)!=close.end()){
                    if(temp->getShortestPathVal()<pathFromCurrent) {
                        continue;
                    }
                    close.pop(temp);
                    open1.push_back(temp);
                }else{
                    this->open1.push_back(temp);
                }
                temp->setShortestPathVal(pathFromCurrent);
                temp->setCameFrom(current);

            }
            close.push_back(current);

        }

        vector<State<T>*> path = this->ThePath(searchable->getGoalState());

        string solution =  searchable->WhereToGo(path);
        return solution;

    }

    string search(Searchable<T> *searchable) {
        return this->tempMyAStar(searchable);
    }

    State<T>* lowestVal(State<T>* goal) {
        vector<State<T>*> temp;

        State<T>* lowest = open1.back();
        open1.pop_back();


        double huristic = abs(lowest->getState().getRow() - goal->getState().getRow() +abs(lowest->getState().getColumn() - goal->getState().getColumn()));
        double first = huristic + lowest->getPathCost();

        while(!this->open1.empty()){
            State<T>* state = open1.back();
            open1.pop_back();


            huristic = abs(state->getState().getRow()- goal->getState().getRow()) +abs(state->getState().getColumn() - goal->getState().getColumn());
            double newCost = huristic + state->getShortestPathVal();

            if(newCost<first){
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

};