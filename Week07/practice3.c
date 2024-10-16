// call by value

#include <stdio.h>

// return X
/* 
void square( int a ) {
    a = a *a;
}

int main(void) {
    int a = 2;
    square(a);
    
    printf("a=%i \n", a);
} 
*/


// return O
int square( int a ){
    return (a*a);
}

int main(void) {
    int a = 2;
    a = square(a);
    
    printf("a=%i \n", a);
}
