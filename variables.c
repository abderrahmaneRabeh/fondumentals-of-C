#include <stdio.h>

int main()
{
    int numOne;
    numOne = 18;
    int numTwo = 0;

    float contity = 13.5;

    char letter = 'B'; // single character

    char word[] = "john"; // array of characters

    printf("hello mister %s \n", word);
    printf("the \"%c\" is for car licence so that \n", letter);
    printf("you need to be grather or equal to %d years old to be able to drive\n", numOne); // %d refers to an integer (decimal)

    return 0;
}