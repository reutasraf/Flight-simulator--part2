//
// Created by reut on 02/01/19.
//

#ifndef PROJ2_MYTESTCLIENTHANDLER_H
#define PROJ2_MYTESTCLIENTHANDLER_H

#include "ClientHandler.h"
#include "Solver.h"
#include "ChachManager.h"
class MyTestClientHandler: public ClientHandler  {

private:
    Solver<string,string>* solver;
    ChachManager<string,string>* cm;
public:
    virtual void  handleClient(IStreamReader* input,OStreamWriter* output);
};


#endif //PROJ2_MYTESTCLIENTHANDLER_H
