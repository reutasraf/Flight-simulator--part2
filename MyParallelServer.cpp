//
// Created by tehila on 08/01/19.
//

#include "MyParallelServer.h"
#include <cstring>



void* handleClient(void* arg){
    //auto args = static_cast<ParamsToUpdate*>(arg);
    struct dataToSoc* params=(struct dataToSoc*) arg;

    SocketRead socketRead;
    socketRead.SetId(params->sockClient);
    SocketWrite socketWriter;
    socketWriter.SetSocketWrite(params->sockClient);
    //arg->getClient()->handleClient();
    params->ch->handleClient(&socketRead,&socketWriter);
}





void* acceptClients(void* arg)
{
    struct dataToSoc* params=(struct dataToSoc*) arg;
    //auto args = static_cast<ParamsToUpdate*>(arg);
    // SocketRead socketRead(args->getSocketClient());
    //SocketWriter socketWriter(args->getSocketClient());
    // pthread_mutex_lock(&args->getMutex());
    //accept(args);
    char *hello = "Hello from server";
    char buffer[256];
    int  n;
    sockaddr_in client_sock;
    int clientSocketVal;
    int clilen = sizeof(client_sock);

    while (!*(params->shouldStop)){


        int new_sock;

        timeval timeout;
        timeout.tv_sec = 10;
        timeout.tv_usec = 0;

        setsockopt(params->sockServer, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout));
        clientSocketVal = ::accept(params->sockServer, (struct sockaddr *) &client_sock, (socklen_t *) &clilen);
        if (clientSocketVal < 0)	{
            if (errno == EWOULDBLOCK)	{
                cout << "timeout!" << endl;
                //  pthread_mutex_unlock(&args->getMutex());
                return nullptr;
            }	else	{
                perror("other error");
                // pthread_mutex_unlock(&args->getMutex());
                return nullptr;
            }
        }else{

            //clientSocketVal = ::accept(*args->getSocketServer(), (struct sockaddr *) &client_sock, (socklen_t *) &clilen);
            params->sockClient = clientSocketVal;
            if (params->sockClient < 0) {
                throw invalid_argument("connection with client failed");
            }
            /* read( clientSocketVal , buffer, 1024);
             printf("%s\n",buffer );
             send(clientSocketVal , hello , strlen(hello) , 0 );
             printf("Hello message sent\n");*/
            //args->getClient()->handleClient(&socketRead,&socketWriter);
            pthread_t threadId;

            struct dataToSoc *para = new dataToSoc;
            para->ch = params->ch;
            para->sockServer = params->sockServer;
            para->port = params->port;
            para->sockClient = params->sockClient;
            para->shouldStop = params->shouldStop;

            pthread_create(&threadId, nullptr, &handleClient, para);

        }

    }
    //  pthread_mutex_unlock(&args->getMutex());
    return nullptr;
}


int MyParallelServer:: open(int port, ClientHandler* clientHandler){
    //ParamsToUpdate* paramsToUpdate = new  ParamsToUpdate();
    //paramsToUpdate->setPortServer(port);
    struct dataToSoc *params = new dataToSoc;
    params->port = port;
    params->shouldStop = &(this->shouldStop);
    params->ch = clientHandler;
    //calls the function opens the socket
    //paramsToUpdate->setClient(clientHandler);
    start(params);
    return 0;
}



void MyParallelServer:: start(dataToSoc* params){
    //Create a socket point
    this->serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (this->serverSocket == -1) {
        throw invalid_argument("Error opening socket");
    }

    params->sockServer=serverSocket;
    //paramsToUpdate->defineSocketServer(serverSocket);
    // Define the client socket's structures
    struct sockaddr_in serverAddress;
    bzero((void *)&serverAddress, sizeof(serverAddress));
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(params->port);
    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        perror("ERROR on binding");
        exit(1);
    }

    if (listen(serverSocket, SOMAXCONN) < 0)   {
        perror("listen error");
        exit(1);
    }
    pthread_create(&thread, nullptr, &acceptClients, params);

    pthread_join(thread, nullptr);
//    pthread_mutex_lock(&paramsToUpdate->getMutex());
//
    cout<<"poooooo hadov"<<endl;
}


void MyParallelServer:: stop(){
    pthread_cancel(thread);
    close(this->serverSocket);
    cout << "Server stopped" << endl;

}