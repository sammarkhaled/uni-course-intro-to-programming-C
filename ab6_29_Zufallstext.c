//generating random symbols
//speed is randomized with every element (use fflush(stdout) and usleep)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    srand(time(NULL));
    int fax = 0;
    int lowerBorder = 33;
    int upperBorder = 126;
    int lowerMSec = 10000;
    int upperMSec = 100000;
    int random;
    int randomMSec;

    while (fax == 0)
    {

        random = (rand() % (upperBorder-lowerBorder + 1)) + lowerBorder;
        randomMSec = (rand() % (upperMSec-lowerMSec + 1)) + lowerMSec;
        printf("%c", (char)random);
        fflush(stdout);
        usleep(randomMSec);
    }
    
    return 0;
}