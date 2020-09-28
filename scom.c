#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <unistd.h>

int fib(int num){
  int a0=0, a1=1, next=0;

  next=a0+a1;

  while(next<num){
    printf(" %d ", next);
    a0=a1;
    a1=next;
    next=a0+a1;

  }


  return 0;
}


int main(int argc, char *argv[]){

//   int n=0;
//   int sockfd=0;
//   char *host="localhost";
//   int port=80;
//   struct hostent *serverip;
//   struct sockaddr_in serv_addr;
//
//
//
// /* create socket */
//   sockfd=socket(AF_INET,SOCK_STREAM,0);
//   if(sockfd < 0){
//     printf("Error on socket\n");
//     return -1;
//   }
//
// /* get hostname */
//   serverip=gethostbyname(host);
//   if(serverip == NULL){
//     printf("Error gethostbyname\n");
//     return -1;
//   }
//
//   //connect()
//
//
//
// /* close socket */
//   close(sockfd);

  fib(100);

  return 0;

}
