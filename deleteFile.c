#include <stdio.h>

int main()
{

    if (remove("test.txt") == 0)
    {
        printf("File deleted successfully\n");
    }
    else
    {
        printf("File not deleted or does not exist\n");
    };
    return 0;
}