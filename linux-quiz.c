#include <stdio.h>

/* This is my first longer program, focused on variable declaration, conditionals (if else) and user input.
 * This quiz tests your knowledge about Linux and the history about that kernel.
 * This is also under no liscense because it is pretty useless to have a liscense on this practice program.
 * Do give feedback on how I can improve on the quiz as well or if I got anything wrong.
 * Thank you!
 */


int main()
{
    int choices; //Used for choosing the right questions
    char faveQuoteOrRant[100]; //This is for the last question

    printf("\nWelcome to the Linux quiz! Let's begin!\n\n");

    printf("Question 1\n\n");
    printf("Who is the creator of Linux?\n1. Linux Torhals\n2. Darth Penguin\n3. Linus Torvalds\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 3) {
        printf("Correct! It is Linus Torvalds!\n\n");
    }
    else {
        printf("Incorrect! It is Linus Torvalds\n\n");
    }

    printf("Question 2\n");
    printf("What year did Linux start being worked on?\n1. 1990\n 2. 1991\n 3. 1994\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 1) {
        printf("Correct! Linux started being worked on in 1990.\n\n");
    }
    else {
    printf("Incorrect! It was 1990.\n\n");
    }

    printf("Question 3\n");
    printf("In what year did the first prototype come out and the first official version?\n1. 1992 prototype, 1993 first version\n2. 1991 prototype, 1994 first version\n3.1993 prototype, 1996 first version\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 2) {
        printf("Correct! It was 1991 and 1994!\n\n");
    }
    else {
        printf("Incorrect! It was 1991 and 1994.\n\n");
    }
    
    printf("Question 4\n");
    printf("Under construction.\n\n");
    
    printf("Thank you for taking this quiz!\nI will be adding more stuff to the quiz tomorrow!\n");
    return 0;
}
