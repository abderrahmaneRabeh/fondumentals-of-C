#include <stdio.h>

int main()
{

    float Test_Score, Handle_String_Error;

    printf("Please Enter Your Score : ");
    Handle_String_Error = scanf("%f", &Test_Score);

    if (Handle_String_Error != 1)
    {
        printf("Invalid Input !");
    }
    else if (Test_Score < 0)
    {
        printf("You enter a negative number");
    }
    else if (Test_Score <= 10.00 && Test_Score >= 0)
    {
        printf("\nYou are not allowed to enter the exam");
    }

    else
    {
        printf("\nYou are Successfully allowed to enter the exame !!");
    }

    return 0;
}