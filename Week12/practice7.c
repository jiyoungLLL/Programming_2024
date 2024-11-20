// 이중 포인터의 활용

#include <stdio.h>

char *proverb = "All that glisters is not gold.";

void setPointer(char **q) {
    *q = proverb;
}

int main(void) { 
    char *p = "zzz";
    setPointer(&p);
    printf("%s \n", p);

    return 0;
}
