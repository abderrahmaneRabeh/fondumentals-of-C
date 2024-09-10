#include <stdio.h>

// function prototype
void addNums(int, int); // that's ensure the function will be called with two parameters

void Test_Func(char name[], int age)
{

    printf("Hello %s\n", name);

    printf("Your age is %d\n", age);
}

int power(int num)
{
    return num * num;
}

int FindMax(int x, int y)
{

    return x > y ? x : y;
}

int main()
{
    //     char name[] = "Rabeh";
    //     int age = 21;

    // Test_Func(name, age);
    // Test_Func("John", 18);

    // int num = power(6);

    // printf("%d", num);

    int max = FindMax(100, 20);

    printf("%d", max);

    return 0;
}

void addNums(int num1, int num2)
{
    printf("%d", num1 + num2);
}