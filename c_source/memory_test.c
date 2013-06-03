#include <stdio.h> 
#include <unistd.h>
#include <fcntl.h>
#define BUFLEN 1024
dummy_function ()
{  
    puts("dummy_function s");
    unsigned char *ptr = 0x00;  
    *ptr = 0x00;//it's not right to operate a pointer point to 0
//    ptr = 0x00;  
    puts("dummy_function e");
}  

int main (void)  
{  
    char buffer[BUFLEN] = {0};
    //add-s
//    unsigned char *ptr = 0x00;  
    //add-e
//    dummy_function (ptr);  
    dummy_function ();  
/*
    int fd = open("testfile", O_RDWR);
    printf("fd [%d]\n", fd);
    ssize_t readnum = read(fd, buffer, BUFLEN);
    printf("readnum [%ld]\n", readnum);
    printf("in buffer -->%s<--\n", buffer);
    */
    

    return 0;  
}
