//
// Created by reut on 06/01/19.
//

#ifndef PROJ2_TEST_H
#define PROJ2_TEST_H


#include "FileCacheManager.h"
#include "MySerialServer.h"
#include "MyTestClientHandler.h"
#include "Solver.h"
#include "StringReverser.h"

class Test {
    void testSerial();
    void testReverse();
    void testFileMan();
    //void tryToOpenAThred();

public:
    void testAll();
    static void printFromTHeThread();

};

#endif //PROJ2_TEST_H


