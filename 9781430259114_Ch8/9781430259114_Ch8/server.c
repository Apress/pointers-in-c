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


int main()
{
 int sockfd;
 int res;
 struct sockaddr_in dest;
 struct sockaddr_in serv;
 int sin_size;
 socklen_t socksize = sizeof(struct sockaddr_in);
 memset(&serv, '\0', sizeof(serv));

 serv.sin_family = AF_INET;
 serv.sin_port = htons(PORT); 
 serv.sin_addr.s_addr = INADDR_ANY;

 sockfd = socket(AF_INET, SOCK_STREAM, 0);
 bind(sockfd, (struct sockaddr*)&serv, sizeof(struct sockaddr));
 listen(sockfd, 1);
 res = accept(sockfd, (struct sockaddr*)&dest, &socksize);

 while(res)
 {
   printf("server: Recieved connection from %s\n", inet_ntoa(dest.sin_addr));
   send(res, "Hello from server\n", 18, 0);
   res = accept(sockfd, (struct sockaddr*)&dest, &socksize);
 }
 close(res);
 close(sockfd);
 return 0;
}
