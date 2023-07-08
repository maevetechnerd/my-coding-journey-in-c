#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This is my first guessing game I write myself and post on GitHub. It was pretty cool bein able to write it.
 * I am at day 8 on learning how to code in C. I am hoping I am able to continue building projects and get more
 * comfortable so I can write my own programs I have in thought and also be able to do kernel development and
 * socket programming. That is what I want to do. If you have any ideas on how to make this program better to tell.
 * Thank you!
 */

int main(void)
{
    int guess;
    int randNum;

    srand(time(NULL));

    randNum = rand() % 100;

    do {
        printf("\nGuess the random number: ");
        scanf("%d", &guess);

        if (guess == randNum) {
            printf("Awesome! You guessed the correct number!\n\n");
            break;
        }
        else if (guess < randNum) {
            printf("Guess was too low. Try again!\n");
        }
        else if (guess > randNum) {
            printf("Guess is too high. Try again!\n");
        }
    } while (guess != randNum);

    printf("Thank you for playing my guessing game!\nHope you enjoyed!\n\n");

    return 0;
}