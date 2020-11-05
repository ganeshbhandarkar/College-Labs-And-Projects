#include <arpa/inet.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 

int main() 
{ 
    int sock; 
    struct sockaddr_in server; 
    int i, temp; 
    
    // Create socket 
    sock = socket(AF_INET, SOCK_STREAM, 0); 
    if (sock == -1) { 
        printf("Could not create socket"); 
    } 
    puts("Socket created"); 
  
    server.sin_addr.s_addr = inet_addr("127.0.0.1"); 
    server.sin_family = AF_INET; 
    server.sin_port = htons(8880); 
  
    // Connect to remote server 
    if (connect(sock, (struct sockaddr*)&server, sizeof(server)) < 0) { 
        perror("connect failed. Error"); 
        return 1; 
    } 
  
    puts("Connected\n"); 

   
    char buffer[100];
    FILE *f;
    f=fopen("add.txt","r");
    fscanf(f,"%s",buffer);
    write(sock,buffer,100);
    printf("the file was sent successfully");
    close(sock); 
    return 0; 
} 
