//
// Created by reut on 03/01/19.
//

#include "SocketRead.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <algorithm>


string SocketRead::getLine() {
    char buffer[1000];
    ssize_t bytes_read;
    bytes_read = read(this->client_sock_fd, buffer, 999);
    //cout<<this->client_sock_fd<<endl;
    if (bytes_read < 0) {
        //cout<<"here";
        __throw_bad_exception();
    }   else if (bytes_read == 0)   {
        __throw_bad_exception();
        //connection closed
        int y = 0;
    } else  {
        buffer[bytes_read] = NULL;
    }
    return buffer;
}
