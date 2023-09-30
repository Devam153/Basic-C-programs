
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int  MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = rand() % MAX + MIN;

    do{ 
        printf("enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("too high\n");
        }
        else if (guess < answer)
        {
            printf("too low\n");
        }
        else
        {
            printf("\ncorrect!\n");
        }
        guesses++;
    }while(guess != answer);

    printf("******************");
    printf("\nanswer: %d", answer);
    printf("\nguesses: %d", guesses);
    printf("\n******************");
}
