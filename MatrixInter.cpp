//
// Created by reut on 09/01/19.
//

#include "MatrixInter.h"
#include "IndexsMat.h"

MatrixSearchable MatrixInter::interpretation(vector<vector<string>> input) {

    vector<vector<State<double >*>> myMatrix;
    vector<vector<State<IndexsMat>*>> matrix;

    /*
    auto itCol = input.begin();
    int i = 0;
    int j = 0;
    for(itCol;itCol!=input.end();++itCol) {
        auto itRow = (*(itCol)).begin();
        for(itRow;itRow!=(*(itCol)).end();++itRow){
            double val = stod(*itRow);
            IndexsMat* indexsMat = new IndexsMat(i,j);
            State<IndexsMat*>* state = new State<IndexsMat* >(indexsMat,val);
            ++j;
        }
        ++i;
    }
     */

    MatrixSearchable* matrixSearchable=new MatrixSearchable;
    vector<string> end = input.back();
    input.pop_back();
    vector<string> start = input.back();
    input.pop_back();
    for(int i  = 0;i<input.size();++i){
        vector<State<IndexsMat >*> vec;
        for(int j  = 0;j<input[i].size();++i){
            double val = stod(input[i][j]);
            IndexsMat indexsMat;
            indexsMat.setColumn(i);
            indexsMat.setRow(j);
            auto * state = new State<IndexsMat>(indexsMat,val);
            vec.push_back(state);
            if((i == stoi(start[0])) && (j==stoi(start[1]))){
                matrixSearchable->setStart(state);
            }
            if((i == stoi(end[0])) && (j==stoi(end[1]))){
                matrixSearchable->setEnd(state);
            }
        }
        matrix.push_back(vec);
    }

    matrixSearchable->setMatrix(matrix);
    //TODO


    //לעשות


    //return MatrixSearchable();
}
