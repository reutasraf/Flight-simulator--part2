
#ifndef PROJ2_INTERPATERANSWERMATRIX_H
#define PROJ2_INTERPATERANSWERMATRIX_H

#include "Interpreter.h"
#include <string>
#include "State.h"
#include <vector>
#include "IndexsMat.h"
using namespace std;
class InterpaterAnswerMatrix :public Interpreter<vector<State<IndexsMat>*>,string>{
public:
    virtual string interpretation(vector<State<IndexsMat>*>);

};

#endif //PROJ2_INTERPATERANSWERMATRIX_H
