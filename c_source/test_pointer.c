#include <stdio.h>

int main()
{
    char arr[10] = {0};
    char arr2[10] = "xyzabcopqr";
    int i = 10;


//    char *ptr = 0;
    char *ptr = arr;
    scanf("%s", ptr);
    printf("%s\n", arr);
    printf("%s\n", arr2);
    printf("%s\n", ptr);
    printf("%d\n", i);
    return 0;
}
