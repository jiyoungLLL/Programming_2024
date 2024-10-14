// 양수/음수 판단

#include <stdio.h>

int main(void) {
    int input_int;
    
    printf("Enter an intger: ");
    scanf("%i", &input_int);

    if(input_int > 0) {
        printf("This is positive number. \n");
    } else if(input_int < 0) {
        printf("This is negative number. \n");
    } else {
        printf("This is 0. \n ");
    }
}
