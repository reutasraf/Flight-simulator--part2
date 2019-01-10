#include <iostream>
#include "Test.h"
#include "BreadthFirstSearch.h"
#include "State.h"
#include "dddd.h"
int main() {
    std::cout << "Hello, World!" << std::endl;




    dddd<double >* hh= new dddd<double >;
    BreadthFirstSearch<double> bdf;

    bdf.search(hh);
    Test t;
    t.testAll();
    int i=0;

    return 0;
}