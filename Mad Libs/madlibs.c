#include <stdio.h>

int main(void)
{
    char feeling[30];
    char toDo[30];
    char gettingSomewhere[30];
    char foodToGet[30];
    char realiseWhatToDo[20];

    printf("\nEnter a feeling: ");
    scanf("%30s", feeling);
    printf("Enter something to do: ");
    scanf("%30s", toDo);
    printf("Enter how to get somewhere: ");
    scanf("%30s", gettingSomewhere);
    printf("Enter what food to get: ");
    scanf("%30s", foodToGet);
    printf("Enter what you realise what you want to do: ");
    scanf("%20s", realiseWhatToDo);

    printf("\nI woke up one day feeling %s.\n", feeling);
    printf("I didn't know what to do when I woke up. am I gonna %s?\n", toDo);
    printf("I get up and %s to the kitchen,\n", gettingSomewhere);
    printf("To get some %s.\n", foodToGet);
    printf("While I make %s I then realise what I want to do.\n", foodToGet);
    printf("I want to %s\n\n", realiseWhatToDo);

    printf("Hope you enjoyed the madlibs! It was fun to make.\n");

    return 0;
}