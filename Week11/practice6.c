// 파일을 읽어서 내용 출력

#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    int c;
    fp = fopen("sample.txt", "r");

    if(fp == NULL) {
        printf("파일을 못열음 \n");
    }

    while ((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    
    fclose(fp);
}
