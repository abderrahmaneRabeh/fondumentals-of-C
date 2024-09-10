#include <stdio.h>

void Print_poiter(int *age)
{
    printf("Hello mister you are %d years old \n", *age);
}

int main()
{
    /*
        pointer : a varable whose value is the address of another variable
     */

    int var_age = 21;
    // pointer synatx:
    int *ptr_age = &var_age;

    // printf("\n----------------------------------\n");

    // printf("ADDRESS : %p\n", &var_age);
    // printf("VALUE of pointer : %p\n", ptr_age); // poiter value is the address of var_age

    // printf("\n----------------------------------\n");

    // printf("VALUE : %d\n", var_age);
    // printf("address of pointer : %d\n", *ptr_age); // poiter address is the value of var_age
    // printf("\n----------------------------------\n");

    Print_poiter(ptr_age);

    return 0;
}