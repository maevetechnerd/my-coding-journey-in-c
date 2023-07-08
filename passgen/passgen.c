#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This is my first password generator.
 * It is pseudo random so do not use this for actual
 * password generation! If you have tips on how to make this
 * better and actual random, do share with me, thank you!
 */

void passGen(int P);

int main(void)
{
    int P = 25;
    passGen(P);

    return 0;
}

void passGen(int P)
{
    char passCHAR[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char passchar[] = "abcdefghijklmnopqrstuvwxyz";
    char passNum[] = "0123456789";
    char passSymbols[] = "!?-_.,+@";
    int randomizer = 0;
    char genpass[P];

    randomizer = rand() % 5;

    srand((unsigned int)(time(NULL)));

    for (int i = 0; i < 25; i++) {
        if (randomizer == 1) {
            genpass[i] = passNum[rand() % 10];
            randomizer = rand() % 5;
            printf("%c", genpass[i]);
        }
        else if (randomizer == 2) {
            genpass[i] = passSymbols[rand() % 8];
            randomizer = rand() % 5;
            printf("%c", genpass[i]);
        }
        else if (randomizer == 3) {
            genpass[i] = passCHAR[rand() % 26];
            randomizer = rand() % 5;
            printf("%c", genpass[i]);
        }
        else {
            genpass[i] = passchar[rand() % 26];
            randomizer = rand() % 5;
            printf("%c", genpass[i]);
        }

    }
}