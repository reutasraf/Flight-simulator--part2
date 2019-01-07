#include <iostream>
#include "Test.h"
#include "BreadthFirstSearch.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    BreadthFirstSearch<double> bdf;
    Test t;
    t.testAll();

    return 0;
}