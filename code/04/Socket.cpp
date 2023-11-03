#ifdef SOCKET
#endif


#include "Socket.h"
#include "util.h"
Socket::Socket() : fd(-1)
{
  fd=socket(AF_INET,SOCK_STREAM,0);

}


void Socket::bind(InetAddress *addr)
{
  errif(::bind(fd,(addr*)&addr->addr),addr->addr_len);
}
void Socket::accept()
{

}
void Socket::~Socket()
{
   if(fd != -1)
   {
     close(fd);
     fd=-1;
   }
}
void Socket::
void Socket::listen()
{

}
