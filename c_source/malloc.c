#include <stdio.h>
#include <stdlib.h>

int main()
{
//    char* ch = (char *)malloc(100);
//    char* ch = (char *)malloc(-100);
//    char* ch = (char *)malloc(0);
//    char* ch = (char *)malloc(1000000000000000000);
//    unsigned int usi = -1;
//    printf("%u\n", usi);
//    printf("%d\n", usi);
//    char* ch = (char *)malloc(-1);
//    4294967295
//    char* ch = (char *)malloc(3000000000);
//    2147483648
    char* ch = (char *)malloc(2147483648);
    if(NULL == ch){
        puts("ch is null.");
    }else{
        puts("ch is NOT null.");
    }
    puts("test");
    free(ch);
    return 0;
}
