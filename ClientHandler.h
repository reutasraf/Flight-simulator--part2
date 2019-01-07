

#ifndef PROJ2_CLIENTHANDLER_H
#define PROJ2_CLIENTHANDLER_H

#include <iostream>
#include "IStreamReader.h"
#include "OStreamWriter.h"
using namespace std;
class ClientHandler{
public:
    virtual void  handleClient(IStreamReader* input,OStreamWriter* output)=0;
    //virtual void  handleClient(istream input,ostream output)=0;
};

#endif //PROJ2_CLIENTHANDLER_H
