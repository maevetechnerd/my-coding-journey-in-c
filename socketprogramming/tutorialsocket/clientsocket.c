#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    //Create the client socket
    int clisock;
    clisock = socket(AF_INET, SOCK_STREAM, 0);

    //Specify socket address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(6900);
    server_address.sin_addr.s_addr = INADDR_ANY;

    //Connect socket
    int connection = connect(clisock, (struct sockaddr*) &server_address, sizeof(server_address));
    if (connection == -1) {
        perror("Unable to connect\n\n");
    }

    //Recieve data
    char response[256];
    recv(clisock, response, sizeof(response), 0);

    //Print server data
    printf("Server sent data: %s", response);

    //Close socket
    close(clisock);

    return 0;
}