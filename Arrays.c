#include <stdio.h>

int main()
{

    double List_price[] = {10.10, 20.20, 30.30, 40.40, 50.50, 60.60, 70.70, 80.80, 90.90, 100.100};

    List_price[10] = 14.11;

    int lenght = sizeof(List_price) / sizeof(List_price[0]);

    for (int i = 0; i <= lenght; i++)
    {

        printf("%.2lf \n", List_price[i]);
    }
    return 0;
}