
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
    Solver<vector<vector<string>>,string>* solver;
    ChachManager<string,string>* cm;
public:
    MyClientHandler(Solver<vector<vector<string>>,string>* solver,ChachManager<string,string>* cm){
        this->solver =solver;
        this->cm = cm;
    }
    string setInformation(IStreamReader *input);
    virtual void  handleClient(IStreamReader* input,OStreamWriter* output);
    vector<vector<string >> lexer(string longString);
};


#endif //PROJ2_MYCLIENTHANDLER_H
