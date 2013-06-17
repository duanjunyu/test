#include <stdio.h>
#include <math.h>
int main(){
    double x, y;
    x = 10;
    y = 2;

    double res = pow(x, y);
    printf("res = [%lf]\n", res);
    return 0;
}
//gcc -o pow pow.c -lm
