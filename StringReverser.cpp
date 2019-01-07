//
// Created by reut on 03/01/19.
//

#include "StringReverser.h"
#include <algorithm>

string StringReverser::solve(string problem) {
    reverse(problem.begin(),problem.end());
    return problem;

}

