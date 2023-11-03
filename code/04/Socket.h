#ifndef SOCKET_H
#define SOCKET_H


class InetAddress;
class Socket
{
  public:
		int fd;
    Socket ();
    Socket (int);
    ~Socket ();
		void listen();
		void bind(InetAddress*);
    void setnonblocking();

    int accept(InetAddress*);
    int getFd();  


}

