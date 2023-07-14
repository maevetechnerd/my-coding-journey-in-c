#include <stdio.h>
#include <stdlib.h>

/* This is my first file writer I have made. It was quite easy. Though, there are ways to do improvements.
 * This was something I thought would be cool to make and it was.
 */


/* This struct is used for cleaner code. */
struct person {
    char name[25];
    int age;
    int height;
    char hobby[25];
};

int main(int argc, char *argv[])
{
    struct person person1;

    FILE *fp;
    fp = fopen("myfirstwrittenfile.bin", "a+");

    if (fopen == NULL) {
        perror("Unable to write or open file");
    }

    /* For manually putting in info to the file */
    printf("Enter a name: ");
    scanf("%25s", person1.name);
    fprintf(fp, "%s:", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);
    fprintf(fp, " %d,", person1.age);

    printf("Enter height: ");
    scanf("%d", &person1.height);
    fprintf(fp, " %dcm,", person1.height);

    printf("Enter a hobby: ");
    scanf("%25s", person1.hobby);
    fprintf(fp, " %s\n", person1.hobby);

    fclose(fp);

    return 0;
}
