cmake_minimum_required(VERSION 3.12)
project(proj2)


##set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")

add_executable(proj2 main.cpp MySerialServer.cpp MySerialServer.h ClientHandler.h Server.h ChachManager.h FileCacheManager.h Solver.h StringReverser.cpp StringReverser.h IStreamReader.h OStreamWriter.h SocketWrite.cpp SocketWrite.h SocketRead.cpp SocketRead.h MyClientHandler.cpp MyClientHandler.h Searchable.h State.h Searcher.h BreadthFirstSearch.cpp BreadthFirstSearch.h MyParallelServer.cpp MyParallelServer.h IndexsMat.h MatrixSearchable.cpp MatrixSearchable.h Interpreter.h MatrixInter.cpp MatrixInter.h SolveSearch.h DepthFirstSearch.h InterpaterAnswerMatrix.cpp InterpaterAnswerMatrix.h AStar.h PriorityQueue.h BestFirstSearch.h Controler.cpp Controler.h)