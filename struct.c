#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
};

int main()
{
    // struct : is collecions of different data types like variables

    struct student s1;
    struct student s2;

    printf("Enter Name : \n");
    scanf("%s", s1.name);
    printf("Enter ID : \n");
    scanf("%d", &s1.id);

    printf("-----------------------------\n\n");

    printf("ID : %d \n", s1.id);
    printf("Name : %s \n", s1.name);

    return 0;
}