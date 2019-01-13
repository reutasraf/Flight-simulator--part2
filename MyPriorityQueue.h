//
// Created by reut on 13/01/19.
//

#ifndef PROJ2_MYPRIORITYQUEUE_H
#define PROJ2_MYPRIORITYQUEUE_H


#include <queue>
#include <iostream>
#include "State.h"
using namespace std;

template<class T>
class comp{
public:
    bool operator()(State<T>* left , State<T>* right){
        return left->getShortestPathVal()>right->getShortestPathVal();
    }
};

template<class T>
class MyPriorityQueue {
    priority_queue<State<T>*,vector<State<T>*>,comp<T>> pq;
public:
    unsigned long Count(){
        return this->pq.size();
    }
    State<T>* popFromthePq(){
        State<T>* temp =  this->pq.top();
        this->pq.pop();
        return temp;
    }

    void add(State<T>* s ){
        this->pq.push(s);
    }

    State<T>* topOfQueue(){
        State<T>* res = this->pq.top();
        return res;
    }


    bool contains(State<T>*s){
        bool returnVal = false;
        vector<State <T>*> temp;
        while(!this->pq.empty()){
            State<T>* var = this->popFromthePq();
            temp.push_back(var);
            if(var->Equal(s)){
                returnVal = true;
                break;
            }

        }
        for(int i = 0 ; i <temp.size();i++ ){
            this->add(temp[i]);
        }

        return returnVal;

    }

    void updatePriority(State<T>*current ,State<T>*update){
        double path;
        vector<State<T>*> temp;
        while (!this->pq.empty()){
            State<T>* top = this->popFromthePq();
            temp.push_back(top);
            if(current->Equal(top)){
                top->setCameFrom(update);
                path = update->getShortestPathVal()+current->getShortestPathVal();
                top->setShortestPathVal(path);
                break;
            }
        }

        for(int i = 0 ; i<temp.size();i++){
            this->pq.push(temp[i]);
        }
    }

    const priority_queue<State<T> *, vector<State<T> *>, comp<T>> &getPq() const {
        return pq;
    }

    void print(){
        while(!this->pq.empty()){
            cout<<this->pq.top()->getCost()<<endl;
            this->pq.pop();

        }
    }

    bool empty(){
        return this->pq.empty();
    }
};

#endif //PROJ2_MYPRIORITYQUEUE_H

