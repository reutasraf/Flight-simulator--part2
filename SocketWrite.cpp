//
// Created by reut on 03/01/19.
//

#include "SocketWrite.h"
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>

#include <string.h>

#include <sys/socket.h>



void SocketWrite::writeLine(string s) {


    const char * ans=s.c_str();
    int n;
    /* Write a response to the client */
    n = write(this->client_Id,ans,10000000000);

    if (n < 0) {
        perror("ERROR writing to socket");
        exit(1);
    }
}
