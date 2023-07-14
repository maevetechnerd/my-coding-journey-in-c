#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[25];
    int age;
    int height;
    char hobby[25];
};

int main(int argc, char *argv[])
{
    struct person person1;

    person1.name;
    person1.age;
    person1.height;
    person1.hobby;

    FILE *fp;
    fp = fopen("myfirstwrittenfile.bin", "a+");

    if (fopen == NULL) {
        perror("Unable to write or open file");
    }

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
    fprintf(fp, " %s", person1.hobby);

    return 0;
}
