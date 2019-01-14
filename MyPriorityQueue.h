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
class compOfPqueue{
public:
    bool operator()(State<T>* left , State<T>* right){
        return left->getShortestPathVal()>right->getShortestPathVal();
    }
};

template<class T>
class MyPriorityQueue {
    priority_queue<State<T>*,vector<State<T>*>,compOfPqueue<T>> pq;
public:
    /*  unsigned long queueSize(){
          return this->pq.size();
      }*/

    bool empty(){
        return this->pq.empty();
    }

    State<T>* popOutFromthePqueue(){
        State<T>* topVal =  this->pq.top();
        this->pq.pop();
        return topVal;
    }

    void addToPqueue(State<T>* addVal){
        this->pq.push(addVal);
    }

    /* State<T>* topOfPqueue(){
         State<T>* res = this->pq.top();
         return res;
     }*/


    bool isPqueueContains(State<T>* checkVal){
        bool returnVal = false;
        vector<State <T>*> temp;
        while(!this->pq.empty()){
            State<T>* val = this->popOutFromthePqueue();
            temp.push_back(val);
            if(val->Equal(checkVal)){
                returnVal = true;
                break;
            }
        }
        for(int i = 0 ; i <temp.size();i++ ){
            this->addToPqueue(temp[i]);
        }
        return returnVal;
    }

    void updatePqueuePriority(State<T>*curVal ,State<T>*newVal){
        double newPath;
        vector<State<T>*> temp;
        while (!this->pq.empty()){
            State<T>* topVal = this->popOutFromthePqueue();
            temp.push_back(topVal);
            if(curVal->Equal(topVal)){
                topVal->setCameFrom(newVal);
                newPath = newVal->getShortestPathVal()+curVal->getShortestPathVal();
                topVal->setShortestPathVal(newPath);
                break;
            }
        }
        for(int i = 0 ; i<temp.size();i++){
            this->pq.push(temp[i]);
        }
    }

};

#endif //PROJ2_MYPRIORITYQUEUE_H

