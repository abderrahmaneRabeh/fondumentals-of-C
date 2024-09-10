#include <stdio.h>

int main()
{
    FILE *ptr__file = fopen("test.txt", "r");

    char text_buffer[255];

    if (ptr__file == NULL)
    {
        printf("File not found\n");
    }
    else
    {

        while (fgets(text_buffer, 255, ptr__file) != NULL)
        {
            printf("%s", text_buffer);
        }
    }
    fclose(ptr__file);

    return 0;
}