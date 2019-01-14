
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
int main() {



























    string dd;;
    dd ="10, 1, 7, 8, 4, 9,10, 5, 3, 5, 9, 2, 3, 4,10, 1, 2, 8, 8, 5, 4, 4, 9, 5\n";
    dd+="6, 6, 9, 9, 5, 4, 5,10,10, 5, 9, 7, 6, 4, 4, 1, 5, 3, 5, 6,10,10, 2, 4\n";
    dd+="9, 6,10, 0, 7, 3, 1, 3, 3, 4, 6, 6, 2, 5, 5, 9, 9, 3,-1, 4, 3, 7, 0,10\n";
    dd+="9, 0, 3, 3, 6, 2, 6, 3, 8, 4, 8, 8, 9, 1, 8, 3,10, 1,10, 8, 4,10, 1, 9\n";
    dd+="10, 8,10, 0, 8, 0, 5, 4, 7, 1,10, 6, 6,-1, 9, 8, 7, 5, 6, 8, 6,10, 5, 2\n";
    dd+="6,10,10, 1, 1, 5, 4, 5, 2,-1, 3, 7, 7, 2, 9, 6, 9, 4, 4, 3, 6, 1,10,10\n";
    dd+="6, 5, 2, 1, 2, 9, 9, 9, 1, 0, 2, 1, 5, 5, 5, 2, 0, 5,10, 3, 9, 4, 5, 3\n";
    dd+="3, 9, 7,10,-1, 4, 4, 3,-1, 9, 2, 9, 9, 1, 8, 7, 4, 7,10, 8, 4, 8, 9,10\n";
    dd+="0,-1, 6, 6, 0, 9, 3, 9,10, 1, 2, 8, 5, 6, 7, 5, 1, 3, 0, 5, 7,10,10, 3\n";
    dd+="9, 9, 8, 8, 3,10,10, 6, 6, 6, 0, 7, 9, 5, 7, 1, 5, 2, 4, 8,10, 0, 4, 6\n";
    dd+="2, 8, 0, 1, 5, 4, 3, 7, 4, 6, 5, 5, 9, 6,10, 4, 1, 8,-1, 5, 2, 4, 9, 4\n";
    dd+="8, 5, 8,10,-1, 5, 8, 8, 4, 6, 9, 9, 4, 4,-1, 5, 1, 5, 9, 3, 8, 8, 6, 9\n";
    dd+="2, 7, 0,-1, 8,10, 9, 8, 1, 7, 7, 6, 3, 9, 2,10, 8, 5, 0, 7, 6, 3,10, 1\n";
    dd+="-1, 9,-1, 0, 5, 8, 4, 1, 0, 4, 1, 6, 7, 7, 5, 7, 1, 9, 7, 0, 4, 1, 3, 2\n";
    dd+="8, 5, 4, 7, 6, 0, 5,10,10, 1, 1, 8, 2, 5, 7, 8, 1, 7, 3, 0,10, 3, 9, 6\n";
    dd+="-1, 8, 4, 2, 2, 3, 0, 9, 5, 1, 2,10, 7, 8, 8, 2, 7, 9, 4, 1, 2, 9, 9, 5\n";
    dd+="3, 9, 8, 9, 5, 8, 2, 0, 7, 1, 1,10, 3, 5,-1, 6, 2, 9, 5, 3, 0, 1, 3, 5\n";
    dd+="7, 1, 2, 8, 3, 1, 6, 2, 9, 7, 2, 1, 7, 7, 1, 6, 1, 6, 5, 6,10, 5, 3, 9\n";
    dd+="9, 5, 0, 5, 6,-1, 9, 9, 8, 4, 1, 0, 6, 0, 2, 3, 5, 9, 7, 5, 4, 3, 3, 7\n";
    dd+="4, 6, 4,-1, 0, 0, 4, 2, 2, 5, 6,-1, 6, 1,10, 9, 3, 8, 6, 2, 7, 3, 8, 2\n";
    dd+="10,10, 6, 8, 6, 6, 4, 7, 2, 0, 0, 3, 9,-1, 2,10,10, 4,-1,10,10, 6, 5,10\n";
    dd+="10, 8, 1, 2, 9, 3, 3, 6, 3, 6, 8, 0, 6, 7, 4, 5, 4, 1, 9, 1, 2, 1, 4, 4\n";
    dd+="4, 5,10,10, 4, 3, 7, 1, 9, 5, 8, 3,-1, 0, 3, 9, 5,10, 0,-1,-1, 3, 4, 6\n";
    dd+="0, 7,10, 6, 1, 0,-1, 6, 5, 1, 5,-1, 8, 9,10, 5, 4, 4, 6, 4, 9, 0, 1, 9\n";
    /*dd+="7, 7, 0, 8, 4, 4, 1, 9, 8, 0, 9, 8,10, 5, 5, 2, 8, 1, 5, 9, 9,10, 6, 5, 9, 8, 1, 4, 4, 7, 6,10, 4, 9, 1, 8, 2\n";
    dd+="1, 6, 7, 2, 8, 7, 6,10, 1, 0, 9, 5,10, 7, 6, 4, 9, 2, 2, 5, 1, 9, 2, 1, 6, 8, 3, 0, 8, 1, 0, 6, 9, 8, 3,-1, 0\n";
    dd+="5, 5, 7,10, 1, 8, 4, 4, 0,10,10, 1, 1, 2, 8, 4, 8, 0, 6, 8, 3, 8, 5, 5, 3, 8,10, 8, 5,10, 1,10, 2, 5, 0,-1, 6\n";
    dd+="9, 0, 8, 1, 3, 5, 6, 0, 7, 9, 2, 1, 6, 8, 1, 2, 1, 5, 0, 0,10, 0, 4, 9, 0, 0, 4, 7, 4, 3, 6, 9, 6, 5,10, 0, 3\n";
    dd+="1, 7, 2, 0, 5, 6,10, 6, 6,10,10, 2, 1, 0, 2, 7, 1, 1, 8, 3, 5, 0,10, 1, 8, 2, 6, 3, 0, 9, 3, 2, 4, 9, 8, 5, 3\n";
    dd+="1, 3, 2, 1, 1, 6, 3,-1, 0, 4, 8, 7, 3, 4, 7, 6, 1, 9, 7, 0,10, 4, 6, 5, 7, 8, 2,10, 1, 2, 6, 7, 8, 2, 3,10, 9\n";
    dd+="3, 6, 4, 9, 2,10, 9, 8, 2, 7, 6, 6, 8, 3, 7, 9, 3, 7, 0, 0, 3, 2, 4, 5, 8, 7, 2,10,10, 4,10, 2,10,-1, 6,-1, 0\n";
    dd+="6, 4, 4,10, 8, 3, 0, 7, 3, 8, 4, 7, 3, 1, 5, 6, 0, 2, 2, 6, 2, 1, 4, 3, 1, 4, 0, 5, 7, 1, 6, 5,10, 7, 5,-1, 3\n";
    dd+="4, 8, 0, 2,10, 9, 3, 3, 8, 7, 7, 8,10, 6,10, 2, 4,10, 0,10, 7, 8, 7, 1, 9, 5,10, 4, 2, 0, 9, 7, 1, 8, 3, 8, 9\n";
    dd+="2, 2, 5, 1, 7, 1, 8, 2,10, 3,10, 5, 7, 9,10,10,10, 0, 4, 4, 2,10, 2, 0, 1, 6, 9,10, 7, 4, 6,10, 8, 4, 8, 0,10\n";
    dd+="3, 1, 0, 8, 1, 4, 7, 9, 3, 7, 3, 6, 6, 6, 3, 9, 9, 3, 9, 3, 3, 7, 5,10, 0, 8, 2, 2, 5, 4, 9, 8, 5, 3, 2, 6, 4\n";
    dd+="10, 1, 9, 5, 9, 2, 6,10, 3, 4,10,-1,10, 7, 9, 2, 1, 2, 0, 4, 6,10, 2, 0, 0, 3, 4, 1, 4, 4, 0, 4,10, 6, 2, 5, 6\n";*/


    dd=dd+"0,0\n"+"23,23\n"+"end\n";







    string h ;
    h= "4,7,8,6,4,6,7,3,10,2,3,8,1,10,4,7,1,7,3,7\n";
    h+= "2,9,8,10,3,1,3,4,8,6,10,3,3,9,10,8,4,7,2,3\n";
    h+= "10,4,2,10,5,8,9,5,6,1,4,7,2,1,7,4,3,1,7,2\n";
    h+= "6,6,5,8,7,6,7,10,4,8,5,6,3,6,5,8,5,5,4,1\n";
    h+= "8,9,7,9,9,5,4,2,5,10,3,1,7,9,10,3,7,7,5,10\n";
    h+= "6,1,5,9,8,2,8,3,8,3,3,7,2,1,7,2,6,10,5,10\n";
    h+= "1,10,2,8,8,2,2,6,10,8,8,7,8,4,7,6,7,4,10,5\n";
    h+= "9,2,3,10,4,10,1,9,9,6,1,10,7,4,9,6,7,2,2,6\n";
    h+= "10,9,5,9,2,1,4,1,5,5,5,5,8,7,4,2,8,6,10,7\n";
    h+="3,2,8,9,6,8,5,2,9,6,10,8,6,4,9,9,4,2,9,10\n";
    h+="7,5,4,4,4,9,7,1,5,9,9,9,10,8,8,7,5,4,1,4\n";
    h+="1,10,3,6,5,1,6,10,5,7,10,3,3,5,8,8,6,5,9,2\n";
    h+="3,9,10,4,7,9,1,3,2,1,6,2,2,1,9,6,1,7,5,7\n";
    h+="3,6,9,7,3,9,5,8,3,5,1,7,3,10,10,1,9,2,4,2\n";
    h+="2,1,4,5,1,4,10,2,10,7,10,4,4,9,1,6,7,7,5,1\n";
    h+="1,5,7,3,7,8,6,7,10,9,8,3,9,3,10,10,7,1,3,8\n";
    h+="7,2,4,3,2,6,10,10,2,5,10,2,1,8,6,9,8,1,5,9\n";
    h+="1,5,3,10,7,2,1,5,3,3,3,1,6,6,3,10,1,3,9,4\n";
    h+="9,1,5,1,10,2,10,7,3,6,5,5,10,10,4,7,1,6,1,3\n";
    h+="10,5,4,6,2,8,5,4,2,5,7,10,5,3,3,7,5,2,3,9\n";


    h=h+"0,0\n"+"19,19\n"+"end\n";




    string p;
    p="4,7,8,6,4,6,7,3,10,2,3,8,1\n";
    p+="10,4,7,1,7,3,7,2,9,8,10,3,1\n";
    p+="3,4,8,6,10,3,3,9,10,8,4,7,2\n";
    p+="3,10,4,2,10,5,8,9,5,6,1,4,7\n";
    p+="2,1,7,4,3,1,7,2,6,6,5,8,7\n";
    p+="6,7,10,4,8,5,6,3,6,5,8,5,5\n";
    p+="4,1,8,9,7,9,9,5,4,2,5,10,3\n";
    p+="1,7,9,10,3,7,7,5,10,6,1,5,9\n";
    p+="8,2,8,3,8,3,3,7,2,1,7,2,6\n";
    p+="10,5,10,1,10,2,8,8,2,2,6,10,8\n";
    p+="8,7,8,4,7,6,7,4,10,5,9,2,3\n";
    p+="10,4,10,1,9,9,6,1,10,7,4,9,6\n";
    p+="7,2,2,6,10,9,5,9,2,1,4,1,5\n";
    p=p+"0,0\n"+"12,12\n"+"end\n";





    //  ParamsToUpdate* params = new ParamsToUpdate();
    // auto start = std::chrono::system_clock::now();
    //Searcher<int>* solver = new BestFirstSearch<int>();
    auto* mySerialServer = new MyParallelServer();

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
    vector<vector<string>> ss = clietS->lexer(p);

    serchBFS->solve(ss);
    serchDFS->solve(ss);
    serchbest->solve(ss);
    serchAstar->solve(ss);
    //mySerialServer->open(5400,clietS);

    //mm->writeToFile();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
