//generate a random number and use the ASCII table to generate a random password with 8 characters
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int lowerBorder = 33;
    int upperBorder = 126;
    int random;

    for(int i = 0; i < 8; i++)
    {
        random = (rand() % (upperBorder-lowerBorder + 1)) + lowerBorder;
        printf("%c", (char)random);
    }
    
    return 0;
}