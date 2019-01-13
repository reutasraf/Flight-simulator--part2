cmake_minimum_required(VERSION 3.12)
project(proj2)


##set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")

add_executable(proj2 main.cpp MySerialServer.cpp MySerialServer.h ClientHandler.h Server.h MyTestClientHandler.cpp MyTestClientHandler.h ChachManager.h FileCacheManager.cpp FileCacheManager.h Solver.h StringReverser.cpp StringReverser.h IStreamReader.h OStreamWriter.h SocketWrite.cpp SocketWrite.h SocketRead.cpp SocketRead.h MyClientHandler.cpp MyClientHandler.h Test.cpp Test.h Searchable.h State.cpp State.h Searcher.h BreadthFirstSearch.cpp BreadthFirstSearch.h dddd.cpp dddd.h MyParallelServer.cpp MyParallelServer.h IndexsMat.cpp IndexsMat.h MatrixSearchable.cpp MatrixSearchable.h Interpreter.h MatrixInter.cpp MatrixInter.h SolveSearch.cpp SolveSearch.h DepthFirstSearch.cpp DepthFirstSearch.h InterpaterAnswerMatrix.cpp InterpaterAnswerMatrix.h BestFirstSearch.cpp BestFirstSearch.h AStar.h MyPriorityQueue.cpp MyPriorityQueue.h)