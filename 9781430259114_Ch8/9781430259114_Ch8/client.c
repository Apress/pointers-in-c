#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/wait.h>
#include<signal.h>

#define PORT 3000 //Servers port
#define MAXBUF 50

int main(int argc, char* argv[])
{
 char buff[MAXBUF+1];
 int len,sockfd;
 struct sockaddr_in serv;
 memset(&serv, '\0', sizeof(serv));
 sockfd = socket(AF_INET, SOCK_STREAM, 0);
 serv.sin_family = AF_INET;
 serv.sin_port = htons(PORT); 
 serv.sin_addr.s_addr = inet_addr("127.0.0.1");;

 connect(sockfd, (struct sockaddr*)&serv, sizeof(struct sockaddr));
 len = recv(sockfd, buff, MAXBUF, 0);
 buff[len] = '\0';
 printf("Received %s (%d bytes) \n", buff, len);
 close(sockfd);
 return 0;
}
