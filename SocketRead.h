//
// Created by reut on 03/01/19.
//

#ifndef PROJ2_SOCKETREAD_H
#define PROJ2_SOCKETREAD_H

#include <string>
#include "IStreamReader.h"
using namespace std;
class SocketRead: public IStreamReader {
private:
    int client_sock_fd;
public:
    virtual string getLine();
    void SetId(int id){
        this->client_sock_fd = id;
    }

};


#endif //PROJ2_SOCKETREAD_H
