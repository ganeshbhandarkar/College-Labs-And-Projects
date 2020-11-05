/*
#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#define SA struct sockaddr
#define LISTENQ 5
int main(int argc,char**argv)
{
	int fd,sockfd,listenfd,connfd;
	pid_t childpid;
	socklen_t client;
	struct sockaddr_in servaddr,cliaddr;
	listenfd=socket(AF_INET,SOCK_STREAM,0);
	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
	servaddr.sin_port=htons(atoi(argv[1]));
	bind(listenfd,(SA*)&servaddr,sizeof(servaddr));
	listen(listenfd,LISTENQ);
	client=sizeof(cliaddr);
connfd=accept(listenfd,(SA*)&cliaddr,&client);
char buffer[100];
FILE *fp;
read(connfd,buffer,100);
fp=fopen("add1.txt","w");
fprintf(fp,"%s",buffer);
printf("the file was received successfully");
printf("the new file created is add1.txt");
}
*/

#include <arpa/inet.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 

int main(int argc, char* argv[]) 
{ 
    int socket_desc, client_sock, c, read_size; 
    struct sockaddr_in server, client; 
    int message[10], i; 
  
    // Create socket 
    socket_desc = socket(AF_INET, SOCK_STREAM, 0); 
    if (socket_desc == -1) { 
        printf("Could not create socket"); 
    } 
    puts("Socket created"); 
  
    // Prepare the sockaddr_in structure 
    server.sin_family = AF_INET; 
    server.sin_addr.s_addr = INADDR_ANY; 
    server.sin_port = htons(8880); 
  
    // Bind the socket 
    if (bind(socket_desc, (struct sockaddr*)&server, sizeof(server)) < 0) { 
  
        // print the error message 
        perror("bind failed. Error"); 
        return 1; 
    } 
    puts("bind done"); 
  
    // lsiten to the socket 
    listen(socket_desc, 3); 
  
    puts("Waiting for incoming connections..."); 
    c = sizeof(struct sockaddr_in); 
  
    // accept connection from an incoming client 
    client_sock = accept(socket_desc, (struct sockaddr*)&client, (socklen_t*)&c); 
  
    if (client_sock < 0) { 
        perror("accept failed"); 
        return 1; 
    } 
  
    puts("Connection accepted"); 
  
    // Receive a message from client 
    char buffer[100];
    FILE *fp;
    read(client_sock,buffer,100);
    fp=fopen("add1.txt","w");
    fprintf(fp,"%s",buffer);
    printf("the file was received successfully");
    printf("the new file created is add1.txt");
  
    return 0; 
} 

