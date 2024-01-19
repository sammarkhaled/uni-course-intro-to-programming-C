#include <stdio.h>

int main(void)
{
    int size;
    char space = ' ';

    do
    {
        printf("Set a size (min 3): ");
        scanf("%d", &size);

        if (size < 3)
        {
            printf("Your size must be bigger than 2\n");
        }

    } while (size < 3);

    for (int i = 1; i <= size; i++)
    {
        for (int j = size - i; j > 0; j--)
        {
            printf("%c", space);
        }

        printf("*");

        for (int k = 1; k < 2 * i - 1; k++)
        {
            printf("%c", space);
        }

        if (i != 1)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < size - 1; i++)
    {
        printf("%c", space);
    }
    printf("||\n");

    return 0;
}
