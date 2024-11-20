// 배열의 활용

#include <stdio.h>

int main(void) {
    int i;
    int grade[5];
    int sum = 0;
    int *p;

    for(i=0;i<5;i++) {
        printf("Input value - grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    for(p=grade; p<grade + 5; p++) {
        printf("grade[%i] = %i \n", p-grade, *p);
        sum += *p;
    }

    printf("average: %i \n", sum/5);

    return 0;
}