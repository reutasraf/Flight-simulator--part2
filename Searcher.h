//
// Created by reut on 06/01/19.
//

#ifndef PROJ2_SEARCHER_H
#define PROJ2_SEARCHER_H

#include <string>
#include "Searchable.h"


using namespace std;
template <class T>
class Searcher{
public:

    virtual vector<State<T>*> search (Searchable<T>* searchable)=0;

    virtual int getNumberOfNodesEvaluated()=0;
};

#endif //PROJ2_SEARCHER_H
