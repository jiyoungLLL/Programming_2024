// 포인터와 함수

#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a; //temp = 3
    *a = *b; // a = 5
    *b = temp; // b = 3
}

int main(void) {
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("a: %i, b: %i \n", a, b);
}
