#include <stdio.h>

int main()
{
    printf("first libne using C \n");
    // this is commented line

    /*
you can comiple and run this code using
terminal command :

first : gcc hello_world.c
and secend file named a.exe will be created

third : type a.exe in the terminal and
you gonna see the result
    */

    // printf("hello \t bonjour \t salamo alaykome");

    int Value, Handle_Invalid_Number;

    printf("Enter a number between 1 and 3 : ");
    Handle_Invalid_Number = scanf("%d", &Value);
    if (Handle_Invalid_Number != 1)
    {
        printf("Invalid Input ! \n");
    }
    else if (Value < 1 || Value > 3)
    {
        printf("The number must be between 0 and 3 \n");
    }
    else
    {
        switch (Value)
        {
        case 1:
            printf("Number 1 is Not the option , Try Next Time \n");
            break;

        case 2:
            printf("Number 2 is Not the option , Try Next Time \n");
            break;

        case 3:
            printf("Number 3 is the option , Congratulations !! \n");
            break;

        default:
            break;
        }
    }

    return 0;
}