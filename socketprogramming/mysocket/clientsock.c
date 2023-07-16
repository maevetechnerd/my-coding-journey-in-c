#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv[])
{
    // Create a socket
    int clientsocket;
    clientsocket = socket(AF_INET, SOCK_STREAM, 0);

    // Specify the address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(6942);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // Connect to socket
    int connectto = connect(clientsocket, (struct sockaddr*) &server_address, sizeof(server_address));
    if (connectto == -1) {
        perror("Unable to connect to socket");
    }

    // Get data from socket
    char msg[256];
    recv(clientsocket, &msg, sizeof(msg), 0);

    // Print the data recieved
    printf("Server sent: %s\n", msg);

    // Close the socket
    close(clientsocket);

    return 0;
}
