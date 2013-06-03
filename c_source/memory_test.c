#include <stdio.h> 
#include <unistd.h>
#include <fcntl.h>
#define BUFLEN 1024
dummy_function (char *ptr)  
{  
//    unsigned char *ptr = 0x00;  
    ptr = 0x00;  
}  

int main (void)  
{  
    char buffer[BUFLEN] = {0};
    //add-s
    unsigned char *ptr = 0x00;  
    //add-e
    dummy_function (ptr);  

    int fd = open("testfile", O_RDWR);
    printf("fd [%d]\n", fd);
    ssize_t readnum = read(fd, buffer, BUFLEN);
    printf("readnum [%ld]\n", readnum);
    printf("in buffer -->%s<--\n", buffer);
    

    return 0;  
}
