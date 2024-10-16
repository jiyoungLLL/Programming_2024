#include <stdio.h>

// 정수 더하기
int sumTwo(int a, int b) {
    return (a+b);
}
// 정수 제곱
int square (int n) {
    return (n*n);
}
// 두 개의 정수 중에서 큰 수를 계산
int get_max (int x, int y) {
    if (x > y) {
        return x;
    } else if (x < y) {
        return y;
    } else {
        return 0;
    }
}
// main
int main (void) {
    int a, b;
    int sum, square_a, max;

    printf("Enter the integers: ");
    scanf("%i %i", &a,&b);

    sum = sumTwo(a, b);
    square_a = square(a);
    max = get_max(a, b);

    printf("Result - Sum: %i, Square: %i, Max: %i \n", sum,square_a,max);

    return 0;
}
