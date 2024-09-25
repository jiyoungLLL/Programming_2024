//  나누기 프로그램 만들기

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float input_a, input_b, output;

    printf("enter two integers : ");
    scanf("%f, %f", &input_a, &input_b);

    output = input_a / input_b;

    printf("%f / %f = %f \n", input_a, input_b, output);

    return 0;
}
