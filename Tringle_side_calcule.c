#include <stdio.h>
#include <math.h>

int main()
{

    double Side_A, Side_B, Side_C;

    printf("Enter Side A : ");
    scanf("%lf", &Side_A);
    printf("\nEnter Side B : ");
    scanf("%lf", &Side_B);

    Side_C = sqrt(Side_A * Side_A + Side_B * Side_B);
    printf("\nSide C = %lf \n", Side_C);

    return 0;
}