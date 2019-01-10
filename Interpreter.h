//
// Created by reut on 09/01/19.
//

#ifndef PROJ2_INTERPRETER_H
#define PROJ2_INTERPRETER_H

template <class INPUT,class OUTPUT>

class Interpreter {
public:
    virtual OUTPUT interpretation(INPUT)=0;

};


#endif //PROJ2_INTERPRETER_H
