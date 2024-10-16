// Combination 프로그램

#include <stdio.h>

int get_integer(void) {
    int num;
    printf("Enter the value: ");
    scanf("%i", &num);

    return num;
}

int pactorial(int num) {
    int result = num; 

    for(int i = num; i > 1; i--) {
        result *= (i-1);
    }

    return result;
}

int combination(int n, int r) {
    int result; 
    result = pactorial(n) / (pactorial(n-r) * pactorial(r));

    return result;
}

int main (void) {
    int n, r, answer;

    n = get_integer();
    r = get_integer();
    answer = combination(n, r);

    printf("The result of C(%i, %i) is %i. \n", n,r,answer);

    return 0;
}
