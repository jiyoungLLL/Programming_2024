// 덧셈 프로그램

#include <stdio.h>

int main (void) {
    int input;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%i", &input);

    for (int i = 1; i <= input; i++) {
        sum += i;
    }

    printf("The result is %i. \n", sum);
}
