// 간접 참조 연산자

#include <stdio.h>

int main(void) {
    int i = 300;

    int *pi = &i;
    char *pc = &i;

    printf("%i, %i, %i \n", i, *pi, *pc);
}
