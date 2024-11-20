// 입력 받은 단어를 파일로 출력

#include <stdio.h>

int main(void) {
    char input[3];
    
    FILE *fp;
    fp = fopen("sample.txt", "w");

    for(int i = 0; i <3; i++) {
        printf("input a word: ");
        scanf("%s", input);
        fprintf(fp, "%s \n", input);
    }

    fclose(fp);
}
