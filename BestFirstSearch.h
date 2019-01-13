//
// Created by imry on 1/7/19.
//

#ifndef PROBLEMSOLVING_BEST_FIRST_SEARCH_H
#define PROBLEMSOLVING_BEST_FIRST_SEARCH_H

#include "Searcher.h"
#include "Searchable.h"
#include <unordered_map>
#include <string>
#include <algorithm>
#include <queue>

template <class T>
class BestFirstSearch : public Searcher<T>{
    class StateCompare {
    public:
        bool operator()(State<T> *left, State<T> *right) {
            return (left->getShortestPathVal() > right->getShortestPathVal());
        }
    };
    priority_queue<State<T>*, vector<State<T>*>, StateCompare> openList;
    //priority_queue<State<T>*> openList;
    vector<State<T>*> saveValues;
    vector<State<T>*> closed;
    vector<State<T>*> temp;
    int countNodesEvaluated;
public:
    BestFirstSearch(){
        countNodesEvaluated = 0;
    }
    virtual vector<State<T>*> search(Searchable<T>* searchable);
    virtual  int getNumberOfNodesEvaluated();
    void addToOpenList(State<T>* state);
    int OpenListSize();
    virtual State<T>* popOpenList();
    vector<State<T>*> backTrace();
    bool openContaines(State<T>*);
    State<T>* bringContaines(State<T>* state);
    virtual string to_string(vector<State<T>*> res);
};
#endif //PROBLEMSOLVING_BEST_FIRST_SEARCH_H


template <class T>
vector<State<T>*> BestFirstSearch<T>:: search(Searchable<T>* searchable){
    State<T>* saveMyVal;
    State<T>* chekMyVal;
    addToOpenList(searchable->intilizationState());
    while (OpenListSize() > 0) {
        State<T>* n = popOpenList(); // inherited from Searcher, removes the best state
        closed.push_back(n);
        if (n->Equal(searchable->getGoalState()))
            return backTrace(); // private method, back traces through the parents
        //calling the delegated method, returns a list of states with n as a parent
        vector<State<T>*> succerssors = searchable->getAllPossibleStates(n);
        typename list<State<T>*>::iterator it;
        for (it = succerssors.begin(); it != succerssors.end(); ++it) {

            auto itClosed = find(closed.begin(), closed.end(),it.operator*());

            if ((itClosed == closed.end()) && !openContaines(it.operator*())) {
                // s.setCameFrom(n); // already done by getSuccessors

                it.operator*()->setShortestPathVal(it.operator*()->getCameFrom()->getShortestPathVal()+it.operator*()->getCost());
                addToOpenList(it.operator*());
            } else {
                double compareNode;
                if(it.operator*()->getCameFrom()== NULL){
                    compareNode = it.operator*()->getCost();
                }else{
                    compareNode = it.operator*()->getCameFrom()->getShortestPathVal() + it.operator*()->getCost();
                }
                chekMyVal = bringContaines(it.operator*());
                if (chekMyVal != nullptr) {
                    if (compareNode < chekMyVal->getCost()) {
                        while (!(*openList.top() == it.operator*())) {
                            temp.push_back(popOpenList());
                        }
                        saveMyVal = openList.top();
                        openList.pop();
                        saveMyVal->setShortestPathVal(compareNode);
                        saveMyVal->setCameFrom(it.operator*()->getCameFrom());
                        addToOpenList(saveMyVal);
                        while (!temp.empty()){
                            addToOpenList(temp.back());
                            temp.pop_back();
                        }
                    }
                }
            }
        }
    }
}

template <class T>
void BestFirstSearch<T>:: addToOpenList(State<T>* state){
    openList.push_back(state);
    saveValues.push_back(state);
    countNodesEvaluated++;
}

template <class T>
int BestFirstSearch<T>:: OpenListSize(){
    openList.size();
}

template <class T>
State<T>* BestFirstSearch<T>:: popOpenList(){
    State<T>* top = openList.top();
    openList.pop();
    auto it = saveValues.begin();
    for(it;it != saveValues.end(); ++it){
        if(top->Equal(*it)){
            saveValues.remove(*it);
            break;
        }
    }
    return top;
}

template <class T>
vector<State<T>*> BestFirstSearch<T>::backTrace(){
    list<State<T>*> solution;
    State<T>* saveVal = this->closed.back();
    State<T>* saveTheDad = saveVal->getCameFrom();
    solution.push_back(closed.back());
    closed.pop_back();
    while(!closed.empty()) {
        State<T>* cmper = closed.back();

        if(cmper->Equal(saveTheDad)){
            solution.push_back(cmper);
            solution.pop_back();
            saveVal = this->closed.back();
            saveTheDad = saveVal->getCameFrom();
        }else{
            solution.pop_back();
        }

    }
    return solution;
}

template <class T>
bool BestFirstSearch<T>::openContaines(State<T>* state){
    auto iterator = find(saveValues.begin(), saveValues.end(),state);
    if(iterator == saveValues.end()){
        return false;
    } else {
        return true;
    }
}

template <class T>
State<T>* BestFirstSearch<T>::bringContaines(State<T>* state){
    auto iterator = find(saveValues.begin(), saveValues.end(),state);
    if(iterator == saveValues.end()){
        return nullptr;
    } else {
        return *iterator;
    }
}

template <class T>
int BestFirstSearch<T>::getNumberOfNodesEvaluated(){
    return  countNodesEvaluated;
}

template <class T>
string BestFirstSearch<T>::to_string(list<State<T>*> res){

}