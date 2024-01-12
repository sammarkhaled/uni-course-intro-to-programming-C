//write a program that calculates x to the power of y
//one program iterative, one program recursive (return type double)
//without using any additional libs
#include <stdio.h>

double powerI(int x, int y)
{
    double result = 1;

    for(int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

int count = 0;
int result = 1;

double powerR(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y > 0)
    {
        return x * powerR(x, y - 1);
    }
    else
    {
        return 1.0 / powerR(x, -y);
    }
}

int main(void)
{
    int x, y;

    printf("base: ");
    scanf("%d", &x);

    printf("exponent: ");
    scanf("%d", &y);

    printf("%d^%d = %f (iterative)\n", x, y, powerI(x, y));
    printf("%d^%d = %f (recursive)\n", x, y, powerR(x, y));
}