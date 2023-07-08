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
    printf("What year did Linux start being worked on?\n1. 1990\n2. 1991\n3. 1994\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 2) {
        printf("Correct! Linux started being worked on in 1991.\n\n");
    }
    else {
    printf("Incorrect! It was 1991.\n\n");
    }

    printf("Question 3\n");
    printf("In what year did the first prototype come out and the first official version?\n1. 1992 prototype, 1993 first version\n2. 1991 prototype, 1994 first version\n3. 1993 prototype, 1996 first version\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 2) {
        printf("Correct! It was 1991 and 1994!\n\n");
    }
    else {
        printf("Incorrect! It was 1991 and 1994.\n\n");
    }
    
    printf("Question 4\n");
    printf("Linux is written only in C\n1. False, it's written in C and Assembly\n2. True, it is only written in C\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 1) {
        printf("Correct! It is false. Linux is written in C and Assembly.\n\n");
    }
    else {
        printf("Incorrect! It is not true.\n\n");
    }
    printf("Question 5\n");
    printf("Which Distros came out 1994\n1. Arch Linux and Gentoo Linux\n2. Ubuntu and Fedora Linux\n3. Slackware and Debian Linux\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 3) {
        printf("Correct! It was Slackware and Debian. Slackware being the first to come out.\n\n");
    }
    else {
        printf("Incorrect! It was Slackware and Debian.\n\n");
    }

    printf("Question 6\n");
    printf("In 1996 there was a competition for who's artwork would become Linux's mascot. Who won and became the Linux mascot\n1. Xenia the Linux Fox\n2. Tux the Penguin\n3. Rocky Raccoon\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 2) {
        printf("Correct! It was Tux the Penguin who won! Though I wish Xenia won.\n\n");
    }
    else {
        printf("Incorrect! It was Tux who won. Also, if you guessed Rocky Raccoon, look up on google, he is a Minix mascot.\n\n");
    }

    printf("Question 7\nModern day Linux\n");
    printf("Linux had a change in it's kernel. There is a new programming language which entered. So besides C and assembly. What Is the new programming language that they write the kernel with\n1. Zig\n2. Java\n3. Rust\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 3) {
        printf("Correct! Rust is the new programming language they added to Linux.\n\n");
    }
    else {
        printf("Incorrect! It was Rust which got added to the kernel.\n\n");
    }

    printf("Question 8\n");
    printf("There have recently been drama in the Linux community. There is one Linux corporation which have got infected by IBM. The cause of this made a Linux distro have it's source code paywalled, which violates the GNU liscense. Which Linux distro and corporation was this\n1. Red Hat\n2. Canonical/Ubuntu\n3. System76/Pop!_OS\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 1) {
        printf("Correct! Red Hat is the distro and corporation that closed the source.\n\n");
    }
    else {
        printf("Incorrect! It was Red Hat.\n\n");
    }

    printf("Question 9\n");
    printf("What is Linus Torvalds favorite programming socks\n1. Pink with white stripes\n2. Black with white stripes\n3. Blue with white stripes\nAnswer: ");
    scanf("%d", &choices);

    if (choices == 1) {
        printf("Correct! It is Pink with white stripes.\n\n");
    }
    else {
        printf("Incorrect! It is Pink with white stripes.\n\n");
    }

    printf("Question 10\n");
    printf("What is your favorite Linus quote or rant\nAnswer: ");
    scanf("%100s", faveQuoteOrRant);

    printf("\n\nThank you for taking this quiz! If there is anything I can improve, do tell.\n\n");
    return 0;
}
