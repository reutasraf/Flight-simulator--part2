//
// Created by reut on 03/01/19.
//

#ifndef PROJ2_STRINGREVERSER_H
#define PROJ2_STRINGREVERSER_H

#include "Solver.h"
#include "string"
using namespace std;
class StringReverser: public Solver<string,string> {
public:
    virtual string solve(string);
};


#endif //PROJ2_STRINGREVERSER_H
