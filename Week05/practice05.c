// 비트 연산자 활용

#include <stdio.h>

int main (void) {
    int input_a, input_b;

    printf("Input two integers: ");
    scanf("%i %i", &input_a, &input_b);

    printf("& result is %i \n", input_a&input_b);
    printf("| result is %i \n", input_a|input_b);
    printf("^ result is %i \n", input_a^input_b);
    printf("<<1 result is %i \n", input_a<<1);
    printf(">>1 result is %i \n", input_a>>1);
    
    return 0;
}
