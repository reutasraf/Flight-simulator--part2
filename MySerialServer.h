#ifndef PROJ2_MYSERIALSERVER_H
#define PROJ2_MYSERIALSERVER_H

#include "Server.h"
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/socket.h>

using namespace server_side;

class MySerialServer:public Server{

private:
    struct sockaddr_in m_socket;
    int sock_fd;
    bool shouldStop;
public:
    MySerialServer(){
        this->shouldStop = false;
    }
    virtual int open(int port,ClientHandler* clientHandler);
    virtual void stop(){
        this->shouldStop = false;
        close(this->sock_fd);
        //TODO close server
    }
    void* OpenThread(void* pVoid);


};


#endif //PROJ2_MYSERIALSERVER_H
