//
// Created by reut on 03/01/19.
//

#ifndef PROJ2_SOCKETWRITE_H
#define PROJ2_SOCKETWRITE_H

#include "OStreamWriter.h"

class SocketWrite: public OStreamWriter {

private:
    int client_Id;
public:
    virtual void writeLine(string s);
    void SetSocketWrite(int id){
        this->client_Id = id;
    }

};


#endif //PROJ2_SOCKETWRITE_H
