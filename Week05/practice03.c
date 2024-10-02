//  나누기/나머지 연산자

#include <stdio.h>

int main(void) {
    int input_second;
    int output_minute, output_second;

    printf("Input the second: ");
    scanf("%i", &input_second);

    output_minute = input_second / 60;
    output_second = input_second % 60;

    printf("The time is %i : %i \n", output_minute, output_second);

    return 0;
}
