// 절댓값 구하기

#include <stdio.h>

int main (void) {
    int input_value;

    printf("Enter an integer: ");
    scanf("%i", &input_value);

    if(input_value >= 0) {
        printf("%i \n", input_value);
    } else {
        printf("%i \n", -input_value);
    }
}
