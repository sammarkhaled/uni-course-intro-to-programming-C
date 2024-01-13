//check if char array has alphabetic elements
//if all symbols are alphabetic -> display a message
//if a symbol is not alphabetic -> exchange it with '*'
//test the program with 3 predefined arrays
#include <stdio.h>

void isAlpha(char word[])
{
    int alpha = 1;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] < 65 || word[i] > 122)
        {
            word[i] = '*';
            alpha = 0;
        }
    }

    if(alpha == 1)
    {
        printf("All symbols are alphabetic!\n");
    }

}

void printArray(char word[])
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        printf("%c", word[i]);
    }
    printf("\n");
}

int main(void)
{
    char word1[] = {'a', 'b', 's', 'D', 'F', 'G', '1', 'j', 'k', '2', '\0'};

    char word2[] = {65, 69, 90, 83, 102, 78, 71, 98, 119, 48, 0};

    char word3[] = "lllllll1ll";

    isAlpha(word1);
    printArray(word1);

    isAlpha(word2);
    printArray(word2);

    isAlpha(word3);
    printArray(word3);

    return 0;
}
