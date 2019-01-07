//
// Created by reut on 02/01/19.
//

#ifndef PROJ2_SERVER_H
#define PROJ2_SERVER_H

#include "ClientHandler.h"

namespace server_side{
    class Server{
    public:
        virtual int open(int port,ClientHandler* clientHandler)=0;
        virtual void stop()=0;

    };
}

#endif //PROJ2_SERVER_H
