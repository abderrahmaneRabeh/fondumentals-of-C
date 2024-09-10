#include <stdio.h>
#include <ctype.h>

int main()
{

    char Temp__Unite;
    float Temp__Value, result;

    printf("\nIs your temperature value in celsius (C) or fahrenheit (F) : \n");

    scanf("%c", &Temp__Unite);
    Temp__Unite = toupper(Temp__Unite);

    if (Temp__Unite == 'C')
    {
        printf("\nEnter the temperature value in celsius : \n");
        scanf("%f", &Temp__Value);

        result = (Temp__Value * 9 / 5) + 32;
        printf("\n The celsius %.1f changed to -> %f F\n", Temp__Value, result);
    }
    else if (Temp__Unite == 'F')
    {
        printf("\nEnter the temperature value in fahrenheit : \n");
        scanf("%f", &Temp__Value);

        result = (Temp__Value - 32) * 5 / 9;
        printf("\n The fahrenheit %.1f changed to -> %f C\n", Temp__Value, result);
    }
    else
    {
        printf("Invalid input !");
    }

    return 0;
}