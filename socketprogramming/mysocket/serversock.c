#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char **argv[])
{
    // Create char msg
    char msg[256] = "Welcome! Here you can boop da snoot!";

    // Create socket
    int servsock;
    servsock = socket(AF_INET, SOCK_STREAM, 0);

    // Specify socket address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(6942);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // Bind socket
    bind(servsock, (struct sockaddr*) &server_address, sizeof(server_address));

    // Listen for connection
    listen(servsock, 5);

    // Accept
    int clientsocket;
    clientsocket = accept(servsock, NULL, NULL);

    // Send msg
    send(clientsocket, msg, sizeof(msg), 0);

    // Close socket
    close(servsock);

    return 0;
}