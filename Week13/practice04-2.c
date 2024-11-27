// 구조체와 포인터

#include <stdio.h>

struct point
{
    int x;
    int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2) {
    int x_dist, y_dist;

    x_dist = pPtr2->x - pPtr1->x;
    y_dist = pPtr2->y - pPtr1->y;

    return (x_dist*y_dist);
}

int main(void){
    struct point p1, p2;
    struct point *pPtr1, *pPtr2;
    pPtr1 = &p1;
    pPtr2 = &p2;

    int area = 0;

    printf("Input the coordinate p1 (x,y): ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Input the coordinate p2 (x,y): ");
    scanf("%d %d", &p2.x, &p2.y);

    // 구조체 포인터를 넘김
    area = getArea(pPtr1, pPtr2);
    printf("Area : %d \n", area);

    return 0;
}
