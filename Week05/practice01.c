// 산술 연산자 활용

#include <stdio.h>

int main (void) {
    int x, y, z, m;
    int a, b, c;
    x=2;
    z=1;
    a=3;
    b=4;
    c=5;

    y = a*x*x + b*x + c;
    m = (x+y+z) / 3;

    printf("y=%d, m=%d \n", y, m);

    return 0;
}
