//
// Created by reut on 08/01/19.
//

#ifndef PROJ2_DDDD_H
#define PROJ2_DDDD_H


#include "Searchable.h"
template <class T>

class dddd: public Searchable<T> {
public:
    virtual State<T>* getInitialState(){}

    virtual State<T>* getGoalState(){}

    virtual vector<State<T>*> getAllPossibleStates(State<T>* s){}
};


#endif //PROJ2_DDDD_H
