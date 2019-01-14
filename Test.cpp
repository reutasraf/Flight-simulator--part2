//
// Created by reut on 06/01/19.
//

#include "Test.h"
#include <pthread.h>
#include <iostream>
using namespace std;


void Test::testSerial() {
    MySerialServer tester;
    ClientHandler *clientHandler=new MyTestClientHandler();
    tester.open(5400,clientHandler);


}

void Test::testAll() {
    //tryToOpenAThred();
}

void Test::testReverse() {
    StringReverser *stringReverser1 = new StringReverser();
    string a = stringReverser1->solve("!@#%");
    cout<<a<<endl;
}

void Test::testFileMan() {
    ChachManager <string,string> *fileCacheManager= new FileCacheManager<string,string>();
    cout<<fileCacheManager->IsSolutionSaved("bye")<<endl;
    fileCacheManager->saveSolution("hello","bye");
    cout<<fileCacheManager->IsSolutionSaved("hello")<<endl;


}

/*void Test::tryToOpenAThred() {

    pthread_t thread1(printFromTHeThread);
    thread1.detach();
}*/

void Test::printFromTHeThread() {
    int i = 0;
    while(i < 20){
        cout<<i<<endl;
        i++;
    }
}











