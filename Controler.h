//
// Created by reut on 15/01/19.
//

#ifndef PROJ2_CONTROLER_H
#define PROJ2_CONTROLER_H
#include <vector>
#include <iostream>

#include "BreadthFirstSearch.h"
#include "State.h"
#include "SolveSearch.h"
#include "DepthFirstSearch.h"
#include "InterpaterAnswerMatrix.h"
#include "ClientHandler.h"
#include "ChachManager.h"
#include "MyClientHandler.h"
#include "Solver.h"
#include "FileCacheManager.h"
#include "SocketRead.h"
#include <iostream>
#include <chrono>
#include "SocketWrite.h"
#include "MyParallelServer.h"
#include "IndexsMat.h"
#include "BestFirstSearch.h"
#include "SolveSearch.h"
#include "AStar.h"

class Controler {
public:
    void run(int port);

};


#endif //PROJ2_CONTROLER_H
