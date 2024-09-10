#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const int MIN = 1, MAX = 10;
    int guess, guess__counter, answer;

    srand(time(0)); // seed the random number generator

    // gen a number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    // logic
    do
    {
        printf("Enter your guess : ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too High... \n");
        }
        else if (guess < answer)
        {
            printf("Too Low... \n");
        }
        else
        {
            printf("=========================\n");
            printf("You guessed it !! \n");
        }
        guess__counter++;
    } while (guess != answer);

    printf("The answer was %d \n", answer);
    printf("You try %d times \n", guess__counter);
    printf("=========================\n");

    return 0;
}
