//
// Created by reut on 09/01/19.
//

#ifndef PROJ2_MATRIXINTER_H
#define PROJ2_MATRIXINTER_H

#include "Interpreter.h"
#include <vector>
#include <string>
#include "MatrixSearchable.h"
#include "State.h"

using namespace std;
class MatrixInter: public Interpreter<vector<vector<string>>,MatrixSearchable>  {
public:
    virtual MatrixSearchable interpretation(vector<vector<string>>);

};


#endif //PROJ2_MATRIXINTER_H
