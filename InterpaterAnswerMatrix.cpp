//
// Created by tehila on 10/01/19.
//

#include <iostream>
#include "InterpaterAnswerMatrix.h"
/**
 * get the vertex in the shortest path and return the path according to what we need(up,down...)
 * @param vec
 * @return
 */
string InterpaterAnswerMatrix::interpretation(vector<State<IndexsMat> *> vec) {

    string result="";

    if(vec.size()==0){
        return "-1";
    }
    for(int i=0;i<vec.size()-1;i++){
//if we come from up or down
    if(vec[i]->getState().getColumn()==vec[i+1]->getState().getColumn()){
        if(vec[i]->getState().getRow()>vec[i+1]->getState().getRow()){
            result=result+"Up,";

    } else{
        result=result+"Down,";
        }
    }
        //if we come from left or right
    else if(vec[i]->getState().getRow()==vec[i+1]->getState().getRow()){
            if(vec[i]->getState().getColumn()>vec[i+1]->getState().getColumn()){
                result=result+"Left,";

            } else{
                result=result+"Right,";
             }

        }

    }
    string afterRe="";
    afterRe = result.substr(0,result.size()-1);

    //cout<<afterRe<<endl;
    return afterRe;
}