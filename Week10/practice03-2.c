// 배열 값 처리

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main (void) {
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 7, 10};

    for (i=0; i<SIZE; i++) {
        if (a[i] != b[i]) {
            printf("두 배열의 index %d는 서로 다른 값입니다. \n", i);
        }
    }
    
    return 0;
}
