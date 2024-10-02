// 윤년 계산

#include <stdio.h>

int main (void) {
    int year, is_leap_year;

    printf("Input the year: ");
    scanf("%i", &year);
    
    is_leap_year = year%4==0 && year%100!=0 || year%400==0;

    printf("Is the year %i the leap year? %i \n", year, is_leap_year);

    return 0;
}
