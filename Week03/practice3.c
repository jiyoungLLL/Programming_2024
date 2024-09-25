// 알파벳 상 문자 출력

#include <stdio.h>

int main (void) {
    char input_char;
    char output_char;

    printf("enter a character: ");
    scanf("%c", &input_char);

    output_char = input_char + 1;  // 입력받은 문자의 다음 문자

    printf("the next character of %c (%d) is %c (%d) \n", input_char, input_char, output_char, output_char);

    return 0;
}
