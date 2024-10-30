// 연결 main

#include <stdio.h>
static int all_files;

extern void sub(void);

int main(void) {
    sub();
    printf("%d \n", all_files);
    return 0;
}

