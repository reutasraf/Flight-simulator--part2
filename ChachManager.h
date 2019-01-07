//int DataReaderServer:: createSock(double port, double time){


// Created by reut on 02/01/19.
//

#ifndef PROJ2_CHACHMANAGER_H
#define PROJ2_CHACHMANAGER_H

#include <string>
using namespace std;


template <class P,class S>
class ChachManager{

public:
    virtual bool IsSolutionSaved(P p)=0;
    virtual S getSolution(P p)=0;
    virtual void saveSolution(P p,S s)=0;

};
#endif //PROJ2_CHACHMANAGER_H
