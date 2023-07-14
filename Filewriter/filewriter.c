#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *character;

    FILE *fp;
    fp = fopen("myfirstwrittenfile.bin", "a+");
    
    if (fopen == NULL) {
        perror("Unable to write or open file");
    }
    printf("Enter a character: ");
    scanf("%c", &character);
    fprintf(fp, "%c", character);
}