#include <stdio.h>
#include <string.h>

int main()
{

    // for loop

    // for (int i = 0; i <= 10; i++)
    // {
    //     printf("%d \n", i);
    // }

    // while loop

    char name[20];

    printf("Enter your name : \n");
    fgets(name, 20, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Please enter your name \n");
        printf("Enter your name : \n");
        fgets(name, 20, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s \n", name);

    return 0;
}