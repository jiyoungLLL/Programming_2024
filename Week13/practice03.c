// 구조체 배열 활용

#include <stdio.h>
#define STUDENTNUM 4

struct student
{
    int ID;
    int score;
};

int main(void) {
    struct student s[STUDENTNUM];
    double scoreSum = 0;
    int highestID = 0, highestScore = 0;

    for(int i = 0; i <STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        printf("Input the score: ");
        scanf("%d", &s[i].score);
        
        if(s[i].score > highestScore) {
            highestScore = s[i].score;
            highestID = s[i].ID;
        }

        scoreSum += s[i].score;
    }


    printf("The average of the score : %f \n", scoreSum/STUDENTNUM);
    printf("The highest score - ID: %d, score: %d \n", highestID, highestScore);
    
    return 0;
}

