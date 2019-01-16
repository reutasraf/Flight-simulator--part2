#include "ClientHandler.h"

struct dataToSoc{
    int port;
    int sock_fd;
    ClientHandler* ch;
    bool * shouldStop;

};
#include <strings.h>
#include "MySerialServer.h"
#include "SocketRead.h"
#include "SocketWrite.h"

int MySerialServer::open(int port, ClientHandler* clientHandler) {

    int portno;
    //struct sockaddr_in serv_addr, cli_addr;


    /* First call to m_socket() function */
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);

    if (sock_fd < 0) {
        perror("ERROR opening m_socket");
        exit(1);
    }

    /* Initialize m_socket structure */
    bzero((char *) &this->m_socket, sizeof(this->m_socket));
    portno = port;

    this->m_socket.sin_family = AF_INET;
    this->m_socket.sin_addr.s_addr = INADDR_ANY;
    this->m_socket.sin_port = htons(portno);

    /* Now bind the host address using bind() call.*/
    if (bind(sock_fd, (struct sockaddr *) &this->m_socket, sizeof(this->m_socket)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    /* Now start listening for the clients, here process will
       * go in sleep mode and will wait for the incoming connection
    */

    //open thread
    listen(sock_fd,1);
    struct dataToSoc *params = new dataToSoc;
    params->port = port;
    params->sock_fd = this->sock_fd;
    params->shouldStop = &(this->shouldStop);
    params->ch = clientHandler;
    this->OpenThread(params);
    string x;
    cin>>x;


    //this->time=time;
    //this->continueLoop = true;


    return 0;
}
int accept(int sock_fd)
{

    sockaddr_in client_sock;
    int clilen;
    int client_sock_fd = ::accept(sock_fd, (struct sockaddr*) &client_sock, (socklen_t *)&clilen);
    if (client_sock_fd < 0) {

        __throw_bad_exception();
    }
    return client_sock_fd;


}

/**
 * the func that run the thread
 * @param args
 * @return nothing
 */
void* OpenThreadFunc(void* args){
    ///read
    struct dataToSoc* params=(struct dataToSoc*) args;
    //params->server2->createSock(params->port,params->timeRead);
    SocketWrite* socketWrite = new SocketWrite();
    SocketRead* socketRead = new SocketRead();
    while (!*(params->shouldStop)){
        int id = accept(params->sock_fd);
        socketWrite->SetSocketWrite(id);
        socketRead->SetId(id);
        params->ch->handleClient(socketRead,socketWrite);
        //TODO time handler
    }

    delete params;
    return nullptr;
}
/**
 * open the pthread
 * @param pVoid
 * @return nothing
 */
void* MySerialServer:: OpenThread(void* pVoid) {

    struct dataToSoc* params=(struct dataToSoc*) pVoid;
    pthread_t trid;
    //params->server2->createSock(params->port,params->timeRead);
    pthread_create(&trid, nullptr,OpenThreadFunc,params);
    return 0;
}




