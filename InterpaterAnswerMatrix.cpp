//
// Created by tehila on 10/01/19.
//

#include "InterpaterAnswerMatrix.h"

string InterpaterAnswerMatrix::interpretation(vector<State<IndexsMat> *> vec) {

    string result="";
    //TODO check about size-1
    if(vec.size()==0){
        return "-1";
    }
    for(int i=0;i<vec.size()-1;i++){

    if(vec[i]->getState().getColumn()==vec[i+1]->getState().getColumn()){
        if(vec[i]->getState().getRow()>vec[i+1]->getState().getRow()){
            result=result+"Up,";

    } else{
        result=result+"Down,";
        }
    }
    else if(vec[i]->getState().getRow()==vec[i+1]->getState().getRow()){
            if(vec[i]->getState().getColumn()>vec[i+1]->getState().getColumn()){
                result=result+"Left,";

            } else{
                result=result+"Right,";
             }

        }

    }
    string afterRe = result.substr(0,result.size()-1);

    return afterRe;
}