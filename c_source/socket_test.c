#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#define PORT 8080
#define SERVERIP "172.100.20.54"
//#define SERVERIP "172.100.20.122"
#define BUFLEN 1024
int main()
{
    printf("connecting to %s\n", SERVERIP);
    char buffer[BUFLEN] = {0};
    struct sockaddr_in address;
    memset(&address, 0, sizeof(struct sockaddr));
    address.sin_family = AF_INET;
    address.sin_port = htons(PORT);
    address.sin_addr.s_addr = inet_addr(SERVERIP);

    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if(-1 == fd)
    {
        perror("socket error");
        return 1;
    }

    int status = connect(fd, (struct sockaddr *)&address, sizeof(struct sockaddr));
    if(-1 == status)
    {
        perror("connect error");
        return 1;
    }

    ssize_t readnum = read(fd, buffer, BUFLEN);

    printf("readnum [%ld]\n", readnum);
    printf("in buffer -->%s<--\n", buffer);
    




    close(fd);
}
