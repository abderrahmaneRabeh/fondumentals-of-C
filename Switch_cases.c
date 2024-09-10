#include <stdio.h>

int main()
{

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

    // the swith case accept just datatype int and char and enum so using if for other datatypes

    float EFF, Handle_String_Error;
    printf("Enter the EFF: ");
    Handle_String_Error = scanf("%f", &EFF);

    if (Handle_String_Error != 1)
    {
        printf("Accept just Numbers");
    }
    else
    {
        if (EFF < 0)
        {
            printf("Negative EFF Not Allowed");
        }
        else if (EFF < 10)
        {
            printf("You faild the exam");
        }
        else if (EFF < 12)
        {
            printf("You passed the exam with \"ASSEZ BIEN\" mension");
        }
        else if (EFF < 14)
        {
            printf("You passed the exam with \"PASSABLE\" mension");
        }
        else if (EFF < 16)
        {
            printf("You passed the exam with \"BIEN\" mension");
        }
        else if (EFF <= 20)
        {
            printf("You passed the exam with \"TRES BIEN\" mension");
        }
        else
        {
            printf("Please enter a number between 0 and 20");
        }
    }

    return 0;
}