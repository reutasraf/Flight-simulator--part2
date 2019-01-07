//
// Created by reut on 02/01/19.
//

#ifndef PROJ2_FILECHACHMANAGER_H
#define PROJ2_FILECHACHMANAGER_H

#include <unordered_map>
#include "ChachManager.h"
#include <unordered_map>
template <class P,class S>
class FileCacheManager: public ChachManager<P,S> {

private:
    unordered_map<P,S> map;
public:
    virtual bool IsSolutionSaved(P p);
    virtual S getSolution(P p);
    virtual void saveSolution(P p,S s);
};



#endif //PROJ2_FILECHACHMANAGER_H
