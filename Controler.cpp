//
// Created by reut on 15/01/19.
//

#include "Controler.h"

void Controler::run(int port) {
    auto* parallelServer = new MyParallelServer;
    auto* cm = new FileCacheManager<string,string>;
    auto *As = new AStar<IndexsMat>();
    auto* interpeterProblem = new MatrixInter();
    auto* interpterSolution = new InterpaterAnswerMatrix();
    auto* serchAstar = new SolveSearch<IndexsMat, string>(As,interpeterProblem,interpterSolution);
    auto* clietS = new MyClientHandler(serchAstar, cm);
    parallelServer->open(port,clietS);

    cm->writeToFile();










    delete (clietS);
    delete(serchAstar);
    delete(interpterSolution);
    delete(interpeterProblem);
    delete(As);
    delete (cm);
    delete(parallelServer);



}
