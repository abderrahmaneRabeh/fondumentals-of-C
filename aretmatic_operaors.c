#include <stdio.h>

int main()
{

    int numOne = 18, numTwo = 4, result;

    result = numOne + numTwo;
    printf("the sum of %d and %d is %d \n", numOne, numTwo, result);

    result = numOne - numTwo;
    printf("the difference of %d and %d is %d \n", numOne, numTwo, result);

    result = numOne * numTwo;
    printf("the product of %d and %d is %d \n", numOne, numTwo, result);

    float result_for_float_value = numOne / (float)numTwo;
    printf("the quotient of %d and %d is %f \n", numOne, numTwo, result_for_float_value);
    return 0;
}