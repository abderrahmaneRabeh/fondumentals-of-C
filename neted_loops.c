#include <stdio.h>

void Symbol_Rectangle(int rows, int cols, char symbol)
{

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {

            printf("%c", symbol);
        }

        printf("\n");
    }
}
void Symbol_Triangle(int rows, char symbol)
{

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            printf("%c", symbol);
        }

        printf("\n");
    }
}

int main()
{

    int rows, cols;
    char symbol;

    printf("Enter Num of Rows : \n");
    scanf("%d", &rows);
    printf("Enter Num of cols : \n");
    scanf("%d", &cols);

    // scanf("%c");

    printf("Enter Symbol : \n");
    scanf(" %c", &symbol);

    printf("\n----------------------------------\n\n");

    Symbol_Rectangle(rows, cols, symbol);

    printf("\n----------------------------------\n\n");

    Symbol_Triangle(rows, symbol);

    return 0;
}