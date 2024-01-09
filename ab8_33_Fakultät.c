//calculate factorial of [0, 50]
//and check until which number the result is still accurate (until 12!)
//change loop to take a condition before calculating
#include <stdio.h>

int main (void)
{
    int factorial = 1;
    int i = 1;
    printf("0! = 0\n");

    while (i <= 12)
    {
        factorial = factorial * i;
        printf("%d! = %d\n", i, factorial);
        i++;
    }

    return 0;
}