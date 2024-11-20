// 파일을 읽어서 내용 출력

#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    char c;
    fp = fopen("sample.txt", "r");

    if(fp == NULL) {
        printf("파일을 못열음 \n");
    }

    while (fgetc(fp) != EOF){
        fgetc(fp);
        printf("%s", c);
    }
    
    fclose(fp);
}
