
#ifndef PROBLEMSOLVING_MATRIXSEARCHABLE_H
#define PROBLEMSOLVING_MATRIXSEARCHABLE_H
#include <vector>
#include <iostream>
#include "Searchable.h"
#include "IndexsMat.h"
using namespace std;
//template <class T>
class MatrixSearchable : public Searchable<IndexsMat>{
private:
    State<IndexsMat>* end;
    State<IndexsMat>* start;
    vector<vector<State<IndexsMat>*>> matrix;
    // 0 - col, 1 - row
public:

    void setMatrix(vector<vector<State<IndexsMat >*>> mat){
        this->matrix =mat;
    }
    void setStart(State<IndexsMat>* start){
        this->start = start;
    }
    void setEnd(State<IndexsMat>* end){
        this->end = end;
    }

    ~MatrixSearchable(){
        for(int i=0;i<matrix.size();i++){
            for (int j = 0; j < matrix[i].size(); ++j) {
                delete(matrix[i][j]);
            }

        }
    }

    virtual State<IndexsMat>* getInitialState(){
        return this->start;
    }

    virtual State<IndexsMat>* getGoalState(){
        return this->end;
    }
    virtual vector<State<IndexsMat>*> getAllPossibleStates(State<IndexsMat>* state);

    State<IndexsMat>* getNei(int col, int row);

};

#endif //PROBLEMSOLVING_MATRIXSEARCHABLE_H

