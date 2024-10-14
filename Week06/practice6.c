// 숫자 맞추기 게임

#include <stdio.h>

int main (void) {
    int answer_number = 87;
    int guess_number, count = 0;

    do {
        printf("Guess a number: ");
        scanf("%i", &guess_number);
        count += 1;

        if(guess_number < answer_number) {
            printf("High! \n");
        } else if (guess_number > answer_number) {
            printf("Low! \n");
        } else {
            printf("Congratulation! Trials: %i \n", count);
        }
    } while (guess_number != answer_number);
}
