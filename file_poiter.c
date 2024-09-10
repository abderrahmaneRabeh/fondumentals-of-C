#include <stdio.h>
int main()
{
    // FILE *ptr__file = fopen("test.txt", "w"); //to write
    FILE *ptr__file = fopen("test.txt", "a"); // to add to the file

    fprintf(ptr__file, "\nOui, C est bon");

    fclose(ptr__file);

    return 0;
}