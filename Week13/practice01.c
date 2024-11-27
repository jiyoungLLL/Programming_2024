// 구조체 정의 및 활용

#include <stdio.h>

struct student
{
    int id;
    char name[8];
    double grade;
};

int main(void) {
   struct student s = {0, " ", 0};

    printf("ID : ");
    scanf("%d", &s.id);
    printf("Name : ");
    scanf("%s", &s.name);
    printf("grade : ");
    scanf("%lf", &s.grade);

    printf("ID : %d \n", s.id);
    printf("Name : %s \n", s.name);
    printf("Grade : %f \n", s.grade);

    return 0;
}
