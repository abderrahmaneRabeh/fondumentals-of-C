#include <stdio.h>
#include <string.h>

int main()
{

    int Numbers__List[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    int rows = sizeof(Numbers__List) / sizeof(Numbers__List[0]);

    int cols = sizeof(Numbers__List[0]) / sizeof(Numbers__List[0][0]);

    printf("ROWS : %d \n", rows);
    printf("COLS : %d \n", cols);

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {

            printf("%d ", Numbers__List[i][j]);
        }

        printf("\n");
    }

    printf("\n------------STRING OF CHARS----------------\n");

    char names[3][10] = {"John", "Rabeh", "Sara"};

    int lenght = sizeof(names) / sizeof(names[0]);

    strcpy(names[0], "KAMAL");
    // Replace "John" with "KAMAL" Because you can't change the value of an array directly

    for (int i = 0; i < lenght; i++)
    {

        printf("%s \n", names[i]);
    }

    return 0;
}