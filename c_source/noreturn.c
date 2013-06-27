#include <stdio.h>
int foo(int x);
int main()
{
    int i = 7;
    int ret = foo(i);
    printf("ret = %d\n", ret);
}
int foo(int x)
{
#if 0
    if(x == 2)
        return 2;
    if(x == 3)
        return 3;
//    return 0;
#endif
}
