// 문자 형태의 숫자 출력

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c;
    int i;

    printf("input a number: ");
    scanf("%c", &c);

    i = c - '0';   // 문자(열)의 끝에 0이 있는 것을 적용
    printf("The input number is %i \n", i);

    return 0;
}
