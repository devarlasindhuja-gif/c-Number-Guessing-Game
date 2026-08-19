#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100\n");

    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess == secretNumber)
    {
        printf("Congratulations! You guessed it!\n");
    }
    else
    {
        printf("Sorry! The number was %d.\n", secretNumber);
    }

    return 0;
}