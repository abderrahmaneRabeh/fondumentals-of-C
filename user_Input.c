#include <stdio.h>
#include <string.h>

int main()
{
    // USE " scanf & fgets"  TO GET INPUT FROM USER

    char name[25];
    int age;

    printf("----------------------------------------\n");
    printf("Enter your name : ");
    // scanf("%s", &name);
    fgets(name, 25, stdin); // to avoid space problem in input
    name[strlen(name) - 1] = '\0';
    printf("----------------------------------------\n");

    printf("Enter your age : ");
    scanf("%d", &age);
    printf("----------------------------------------\n\n");

    printf("your name is : | %s | \nyour age is : | %d | \n", name, age);

    return 0;
}