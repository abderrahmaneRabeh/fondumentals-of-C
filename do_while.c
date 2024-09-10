#include <stdio.h>
#include <string.h>

int main()
{

    int total, num = 0;

    do
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        total += num;
    } while (num > 0);

    printf("The total is : %d", total);

    return 0;
}