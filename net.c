#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
  char str[] = "192.168.1.10";
  struct in_addr local;
  
  printf("%x\n", inet_addr(str));
  printf("************\n");
  inet_aton(str, &local);
  printf("x%\n", local.s_addr);
  printf("************\n");
  printf("%s", inet_ntoa(local));
}
