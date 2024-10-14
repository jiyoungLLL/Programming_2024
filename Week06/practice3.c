// 문자 개수 세기

#include <stdio.h>

int main (void) {
    int input_string;
    int num = 0;

    printf("Input a string: ");
    
    // getchar()은 가장 앞문자만 읽음
    // 그래서 while문으로 전체 문자 검사 필요
    while((input_string = getchar()) != '\n') {
        if(input_string >= 48 && input_string <= 57) {
            num += 1;
        }
    }

    printf("The number of digits is %i \n", num);
}
