
/*
#include <iostream>
#include "Test.h"
#include "BreadthFirstSearch.h"
#include "State.h"
#include "dddd.h"
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
#include "BestFirstSearch.h"
#include "AStar.h"
int main() {
    std::cout << "Hello, World!" << std::endl;


    auto* mySerialServer = new MyP();
    auto* ooo = new SocketRead();
    ooo->SetId(5402);
    auto* bbb = new SocketWrite();
    bbb->SetSocketWrite(5400);

    vector<vector<string>> ff;
    vector<string> dd = {"1","2","3"};
    ff.push_back(dd);
    vector<string> gg = {"-1","-1","-1"};
    ff.push_back(gg);
    vector<string> ww = {"7","8","9"};
    ff.push_back(ww);
    vector<string> w = {"0","0"};
    ff.push_back(w);
    vector<string> w0 = {"2","2"};
    ff.push_back(w0);


    auto * cm = new FileCacheManager<string,string>;

    auto * interS = new InterpaterAnswerMatrix;
    MatrixInter* mat = new MatrixInter;
    auto *dfs = new DepthFirstSearch<IndexsMat>();
    auto* bfs = new BreadthFirstSearch<IndexsMat>();
    auto *best = new BestFirstSearch<IndexsMat>();
    auto *As = new AStar<IndexsMat>();
    auto * solver = new SolveSearch<IndexsMat ,string> (best,mat,interS);
    //solveSearch.solve(ff);

    auto * myCli = new MyClientHandler(solver,cm);

    mySerialServer->open(5400,myCli);
    cm->writeToFile();

    Test t;
    t.testAll();
    int i=0;

    return 0;
}*/

#include <vector>
#include <iostream>
#include "Test.h"
#include "BreadthFirstSearch.h"
#include "State.h"
#include "dddd.h"
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
using namespace std;
int main(int args,char* argv[]) {

    int port;
    try {
        port = stoi(argv[1]);
    }catch(exception){
        perror( "invalid args");
        exit(1);
    }







    //  ParamsToUpdate* params = new ParamsToUpdate();
    // auto start = std::chrono::system_clock::now();
    //Searcher<int>* solver = new BestFirstSearch<int>();
    auto* mySerialServer = new MyParallelServer;

   //auto* ooo = new SocketRead(5402);ParallelServer
   //auto* bbb = new SocketWriter(5400);


    //RowAndCol fff()
    // Searcher<> best = new BestFirstSearch
    // auto* best = new BestFirstSearch<RowAndCol>();
    auto* mm = new FileCacheManager<string,string>;
    mm->loadFile();
    auto* nn = new BreadthFirstSearch<IndexsMat>();
    auto *best = new BestFirstSearch<IndexsMat>();
    auto * dfs = new DepthFirstSearch<IndexsMat>();
    auto *As = new AStar<IndexsMat>();
    auto* interpeterProblem = new MatrixInter();
    auto* interpterSolution = new InterpaterAnswerMatrix();


    auto* serchBFS = new SolveSearch<IndexsMat, string>(nn,interpeterProblem,interpterSolution);
    auto* serchDFS = new SolveSearch<IndexsMat, string>(dfs,interpeterProblem,interpterSolution);
    auto* serchbest = new SolveSearch<IndexsMat, string>(best,interpeterProblem,interpterSolution);
    auto* serchAstar = new SolveSearch<IndexsMat, string>(As,interpeterProblem,interpterSolution);
    auto* clietS = new MyClientHandler(serchbest, mm);
    //vector<vector<string>> ss = clietS->lexer(p);

    //serchBFS->solve(ss);
    //serchDFS->solve(ss);
    //serchbest->solve(ss);
    //serchAstar->solve(ss);
    mySerialServer->open(port,clietS);

    //mm->writeToFile();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
