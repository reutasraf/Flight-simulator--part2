
#ifndef PROJ2_SOLVESEARCH_H
#define PROJ2_SOLVESEARCH_H

#include <iostream>
#include "Solver.h"
#include "Searchable.h"
#include "MatrixInter.h"
#include "Searcher.h"
#include "InterpaterAnswerMatrix.h"
template <class T,class Solution>
class SolveSearch :public Solver< vector<vector<string>>, Solution>{
private:
    Searcher<T>* search;
    MatrixInter* inter;
    InterpaterAnswerMatrix* interpaterAnswerMatrix;

public:

    SolveSearch(Searcher<T>* searcher,MatrixInter* matrixInter,InterpaterAnswerMatrix* interpaterAnswerMatrix1){
        this->search = searcher;
        this->inter = matrixInter;
        this->interpaterAnswerMatrix = interpaterAnswerMatrix1;
    }

    virtual Solution solve(vector<vector<string>> information){
        vector<State<IndexsMat >*> vector1;
        Searchable<T>* matrix=inter->interpretation(information);
        vector1=search->search(matrix);
        string result= interpaterAnswerMatrix->interpretation(vector1);

        //TODO delete states
        //delete(matrix);
        return result;

    }

};


#endif //PROJ2_SOLVESEARCH_H
