#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char **argv[])
{
    char server_message[256] = "You have reached the server\n";

    // Create server socket
    int server_socket;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // Specify server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(6900);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // Bind server
    bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));

    // Listen after a connection
    listen(server_socket, 5);

    // Accept connection
    int client_socket;
    client_socket = accept(server_socket, NULL, NULL);

    // Send message
    send(client_socket, server_message, sizeof(server_message), 0);

    // Close the socket
    close(server_socket);

    return 0;
}