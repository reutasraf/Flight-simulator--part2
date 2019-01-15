
#ifndef PROJ2_SOLVER_H
#define PROJ2_SOLVER_H

template <class P,class S>

class Solver {
public:
    //get problem and return solution
    virtual S solve(P) = 0;

};


#endif //PROJ2_SOLVER_H
