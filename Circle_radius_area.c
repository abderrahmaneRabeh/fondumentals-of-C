#include <stdio.h>

int main()
{

    const int PI = 3.14;

    double Circle__Radius, Circle__Area, Circumference_Of_Circle, Area_Of_Circle;

    printf("Enter the radius of the circle : ");
    scanf("%lf", &Circle__Radius);

    Circumference_Of_Circle = 2 * PI * Circle__Radius;
    Area_Of_Circle = PI * (Circle__Radius * Circle__Radius);

    printf("\n--------------------------------------------\n");
    printf("The Circumference of the circle is : %lf \n", Circumference_Of_Circle);
    printf("--------------------------------------------\n");
    printf("The Area of the circle is : %lf \n", Area_Of_Circle);

    return 0;
}