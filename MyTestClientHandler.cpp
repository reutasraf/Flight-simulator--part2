//
// Created by reut on 02/01/19.
//

#include "MyTestClientHandler.h"


#include <unistd.h>
#include <strings.h>
#include <cstring>


void MyTestClientHandler::handleClient(IStreamReader *input, OStreamWriter *output) {
    int clilen;
    ssize_t n;
    bool keepReading = true;


    while(keepReading) {
        string buff =input->getLine();
        if(buff=="end"){
            keepReading= false;
            return;
        }
        output->writeLine(this->solver->solve(buff));

    }
}
