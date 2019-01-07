//
// Created by reut on 03/01/19.
//

#ifndef PROJ2_MYCLIENTHANDLER_H
#define PROJ2_MYCLIENTHANDLER_H

#include "ClientHandler.h"
#include "Solver.h"
#include "ChachManager.h"
#include <string>
#include <vector>
#include <fstream>
#include <string.h>
#include <map>
#include <list>
#include <regex>
class MyClientHandler:public ClientHandler{
private:
    Solver<vector<vector<double>>,string>* solver;
    ChachManager<vector<vector<double>>,string>* cm;
public:
    vector<vector<double>> setInformation(IStreamReader *input);
    virtual void  handleClient(IStreamReader* input,OStreamWriter* output);
    vector<vector<double >> lexer(string longString);
};


#endif //PROJ2_MYCLIENTHANDLER_H
