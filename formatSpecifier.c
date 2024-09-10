#include <stdio.h>

int main()
{
    /*

    %c : caractere

    %s : string

    %d : decimal

    %f : float

    %lf : long float

    %ld : long decimal

    %lu : long unsigned decimal

    */

    float Product_1_Price = 13.5;
    float Product_2_Price = 25.05;
    float Product_3_Price = 115.375;

    printf("============================================\n\n");

    printf("Product_1_Price = $%10f \n", Product_1_Price);

    printf("--------------------------------------------\n");

    printf("Product_2_Price = $%10f \n", Product_2_Price);

    printf("--------------------------------------------\n");

    printf("Product_3_Price = $%10f \n", Product_3_Price);

    printf("============================================\n");

    return 0;
}