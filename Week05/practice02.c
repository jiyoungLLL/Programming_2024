// 사칙연산 계산기

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Input two integers: ");
    scanf("%i %i", &a, &b);

    printf("+ result is %i \n", a+b);
    printf("- result is %i \n", a-b);
    printf("* result is %i \n", a*b);
    printf("/ result is %i \n", a/b);
    printf("%% result is %i \n", a%b);

    return 0;
}
