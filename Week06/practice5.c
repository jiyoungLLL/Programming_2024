// 산술계산기

#include <stdio.h>

int main(void) {
    int a, b, output;
    char operator;

    printf("Enter the calculation: ");
    scanf("%i %c %i", &a, &operator, &b);

    switch (operator)
    {
    case '+':
        output = a + b;
        break;
    
    case '-':
        output = a - b;
        break;

    case '*':
        output = a * b;
        break;

    case '/':
        output = a / b;
        break;
        
    default:
        output = 0;
        printf("Error input : %c", operator);
        break;
    }

    printf("= %i \n", output);
}
