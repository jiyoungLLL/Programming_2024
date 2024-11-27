// 구조체와 포인터

#include <stdio.h>

struct point
{
    int x;
    int y;
};

int getArea(struct point p1, struct point p2) {
    int x_dist, y_dist;

    x_dist = p2.x - p1.x;
    y_dist = p2.y - p1.y;

    return (x_dist*y_dist);
}

int main(void){
    struct point p1, p2;
    int area = 0;

    printf("Input the coordinate p1 (x,y): ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Input the coordinate p2 (x,y): ");
    scanf("%d %d", &p2.x, &p2.y);

    // 구조체 변수 자체를 매개변수로 넘김
    area = getArea(p1, p2);
    printf("Area : %d \n", area);

    return 0;
}
