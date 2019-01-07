////
// Created by reut on 07/01/19.
//
// Created by reut on 02/01/19.
//

#include "FileCacheManager.h"

template<class P, class S>
bool FileCacheManager<P, S>::IsSolutionSaved(P p) {
    return map.count(p) != 0;
}

template<class P, class S>
S FileCacheManager<P, S>::getSolution(P p) {
    if(this->IsSolutionSaved(p)){
        return (this->map).at(p);
    } else{
        return NULL;
    }
}

template<class P, class S>
void FileCacheManager<P, S>::saveSolution(P p, S s) {

    this->map.insert(pair<P,S>(p,s));
}

template class FileCacheManager<string, string>;

