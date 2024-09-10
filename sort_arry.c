#include <stdio.h>

void Sort_Nums(int Arry[], int size) // function that sort Arry of Numbers
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (Arry[j] > Arry[j + 1])
            {
                temp = Arry[j];
                Arry[j] = Arry[j + 1];
                Arry[j + 1] = temp;
            }
        }
    }
}
void Sort_String(char Arry[], int size) // function that sort Arry of String
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (Arry[j] > Arry[j + 1])
            {
                temp = Arry[j];
                Arry[j] = Arry[j + 1];
                Arry[j + 1] = temp;
            }
        }
    }
}

void Print_Arry_Nums(int Arry[], int size) // function that print Arry of Numbers
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", Arry[i]);
    }

    printf("\n");
}
void Print_Arry_String(char Arry[], int size) // function that print Arry of String
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%c ", Arry[i]);
    }

    printf("\n");
}

int main()
{

    int Arry_Of_Nums[] = {5, 3, 1, 7, 4, 6, 8, 2, 9, 11};

    int size_of_nums = sizeof(Arry_Of_Nums) / sizeof(Arry_Of_Nums[0]);

    Sort_Nums(Arry_Of_Nums, size_of_nums);
    Print_Arry_Nums(Arry_Of_Nums, size_of_nums);

    // chart sort

    char random_alphabets[] = {'J', 'A', 'Z', 'E', 'Q', 'X', 'C', 'V', 'B', 'N', 'R', 'T', 'Y', 'U', 'I'};
    int random_alphabets_size = sizeof(random_alphabets) / sizeof(random_alphabets[0]);

    Sort_String(random_alphabets, random_alphabets_size);
    Print_Arry_String(random_alphabets, random_alphabets_size);

    return 0;
}