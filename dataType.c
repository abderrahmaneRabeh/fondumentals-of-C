#include <stdio.h>
#include <stdbool.h>

int main()
{

    // ----------------- CHAR & STRING

    char letter = 'a';           // single character || %c  "caracter"
    char paraghraph[] = "hello"; // array of characters || %s "string"

    // -----------------NUMBERS

    int Number__Integr = 10;                   // %d  "decimal" between -2147483648 to 2147483647
    unsigned int Number__Unsigned_Int = 12345; // %d between 0 to 4294967295
    float Number__Float = 13.5342;             // %f  6 - 7 digits "float"
    double Number__Double = 13.5555587675;     // %lf  15 - 16 digits "long float"

    short Number__Short = 22671;                   // %d between -32768 to 32767
    unsigned short Number__Unsigned_Short = 12345; // %d between 0 to 65535

    long long Number__Long = 22671654564;                    // %lld between  -9223372036854775808 to 9223372036854775807
    unsigned long long Number__Unsigned_Long = 123457646535; // %llu between 0 to 18446744073709551615

    // printf("%lld \n", Number__Unsigned_Long);

    // -----------------BOOLEAN

    bool isTrue = true;   // %d
    bool isFalse = false; // %d

    // -----------------ADDITION

    char NumReferToLetter = 120; // you can use numbes between -128 to 127
    unsigned char Positive_Num_Refer_To_Letter = 125;

    // printf("%c \n", NumReferToLetter);

    // printf("%c \n", Positive_Num_Refer_To_Letter);

    // -----------------CONSTANT

    const int ROOM_WIDTH = 1000; // the name should be uppercase

    // printf("%d \n", ROOM_WIDTH);

    int test_num1 = 5, test_num2 = 5, test_num3 = 5;

    printf("Number 1 : %d \n", test_num1);

    printf("Number 2 : %d \n", test_num2);

    printf("Number 3 : %d \n", test_num3);
    return 0;
}