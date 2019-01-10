//
// Created by tehila on 08/01/19.
//

#ifndef PROJ2_MYPARALLELSERVER_H
#define PROJ2_MYPARALLELSERVER_H

#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <strings.h>
#include "Server.h"
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <pthread.h>
#include "SocketRead.h"
#include "SocketWrite.h"

#define MAX_CONNECTED_CLIENTS 1
using namespace server_side;

struct dataToSoc{
    int port;
    int sockServer;
    int sockClient;
    ClientHandler* ch;
    bool * shouldStop;
};

class MyParallelServer :public Server{
    pthread_t thread;
    int clientSock;
    int serverSocket;
    bool shouldStop;
public:
    MyParallelServer(){
        this->shouldStop = false;
    }
    virtual int open(int port, ClientHandler* clientHandler);
    virtual void stop();
    void start(dataToSoc* param);
    void setStop(){
        this->shouldStop = true;
    }
};


#endif //PROJ2_MYPARALLELSERVER_H