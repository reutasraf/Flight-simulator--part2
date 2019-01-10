//
// Created by reut on 09/01/19.
//

#ifndef PROJ2_SOLVESEARCH_H
#define PROJ2_SOLVESEARCH_H

#include "Solver.h"
#include "Searchable.h"
#include "MatrixInter.h"
#include "Searcher.h"
template <class T ,class Solution>
class SolveSearch :public Solver<class Searchable<T> , Solution>{
private:
    Searcher<T> search;
    MatrixInter inter;
public:

    SolveSearch(Searcher<T> searcher,MatrixInter matrixInter){
        this->search = searcher;
        this->inter = matrixInter;
    }

    virtual Solution solve(vector<vector<string>> information){
        Searchable<T> matrix=inter.interpretation(information);
        vector<State<double >> vector1=search.search(matrix);
    }

};


#endif //PROJ2_SOLVESEARCH_H
