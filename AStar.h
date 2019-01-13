//
// Created by reut on 13/01/19.
//

#ifndef PROJ2_ASTAR_H
#define PROJ2_ASTAR_H

#include "Searcher.h"
using namespace std;
template <class T>
class AStar: public Searcher<T>{
private:
    int nodesEvaluated;
public:
    AStar(){
        this->nodesEvaluated = 0;
    }
    virtual vector<State<T>*> search (Searchable<T>* searchable);

    virtual int getNumberOfNodesEvaluated(){
        return this->nodesEvaluated;
    }

};



template<class T>
static string returnBack(Searchable<T>* searchable) {
    list<State<T>*> queue;
    State<T>* back = searchable->getGoalState();
    while (back->getState()->getI()!=searchable->getInitialState()->getState()->getI()
           || back->getState()->getJ()!=searchable->getInitialState()->getState()->getJ()) {
        queue.push_front(back);
        back = back->getCameFrom();
    }
    queue.push_front(back);
    return convertListStateToString(queue);
}

//string search(Searchable<T>* searchable){
template<class T>
vector<State<T>*> search (Searchable<T>* searchable{

    vector<State*> myTempList;
    State<T>* goal = searchable->getGoalState();
    State<T>* start = searchable->getInitialState();
    vector<State<T>*> open;
    State<T>* current = goal->getState();
    current->getState().getRow();
    current->getState().getColumn();
    open.push_back(start);
    while(!open.empty()){
        State<T>* state = open.front();
        open.pop_front();
        double stateCost = state.getCost();
        this->nodesEvaluated++;

        if(state->equals(goal)){
            this->nodesEvaluated++;
            return returnBack(searchable);
        }

        vector<State<T>*> adj = searchable->getAllPossibleStates(state);
        while (!adj.empty()){
            State<T>* temp = adj.front();
            adj.pop_front();

            State<T>* stateTemp = temp->getState();

            double huristic = abs(stateTemp.getState.getRow() - goal.getState().getRow()) +abs(stateTemp->getState().getColomn() - goal.getState().getColumn());
            double newCost = huristic + state.getCostUntilHere() + temp->getCostUntilHere();

            if (myTempList.find(temp)) {
                double preCost = temp.getCost();
                if (newCost < preCost){
                    temp->setCameFrom(state);
                    temp.setCostUntilHere(newCost);
                }
            } else {
                open.push_back(temp);
                temp->setCameFrom(state);
                myTempList.push_back(temp);
            }
        }
    }
}








#endif //PROJ2_ASTAR_H
