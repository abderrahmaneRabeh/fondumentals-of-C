#include <stdio.h>

int main()
{
    char Operateur;
    double Num_1, Num_2, result;

    printf("Choose the Operateur Using ->  +  |  - |  * |  /  : ");
    scanf("%c", &Operateur);

    if (Operateur != '+' && Operateur != '-' && Operateur != '*' && Operateur != '/')
    {
        printf("Error: Invalid Operateur '%c'\n", Operateur);
        return 1;
    }
    else
    {

        printf("Enter First Number : ");
        scanf("%lf", &Num_1);

        printf("Enter Second Number : ");
        scanf("%lf", &Num_2);

        switch (Operateur)
        {
        case '+':
            result = Num_1 + Num_2;
            printf("%.0lf + %.0lf = %.3lf", Num_1, Num_2, result);
            break;
        case '-':
            result = Num_1 - Num_2;
            printf("%.0lf - %.0lf = %.3lf", Num_1, Num_2, result);
            break;
        case '*':
            result = Num_1 * Num_2;
            printf("%.0lf * %.0lf = %.3lf", Num_1, Num_2, result);
            break;
        case '/':
            result = Num_1 / (int)Num_2;
            printf("%.0lf / %.0lf = %.3lf", Num_1, Num_2, result);
            break;

        default:
            printf("%c is Invalid Operateur", Operateur);
            break;
        }
    }

    return 0;
}