#include <stdio.h>
#include <math.h>

#define ISUNSIGNED(a) (a>=0 && ~a>=0)

int main()
{
    int a = 0;
    unsigned int b = 0;

    printf("a:%x\n", a);
    printf("~a:%x\n", ~a);
    printf("b:%x\n", b);
    printf("~b:%x\n", ~b);
    printf("a is %s\n", ISUNSIGNED(a)?"unsigned":"signed");
    printf("b is %s\n", ISUNSIGNED(b)?"unsigned":"signed");
    return 0;
}
