#include <stdio.h>
#include <string.h>

int main()
{

    char Value_One[10] = "Rabeh";
    char Value_Two[10] = "Hero";

    printf("V1 :  %s \n", Value_One);
    printf("V2 :  %s \n", Value_Two);

    char Temporary_Container[20];

    strcpy(Temporary_Container, Value_One);
    strcpy(Value_One, Value_Two);
    strcpy(Value_Two, Temporary_Container);

    printf("-------------------------------------------\n");
    printf("V1 :  %s \n", Value_One);
    printf("V2 :  %s \n", Value_Two);

    return 0;
}