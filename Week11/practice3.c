// 문자열 복사

#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "The worst things to eat before you sleep";
    char dst[100];

    strcpy(dst, src);

    printf("copied string: %s \n", dst);
}
