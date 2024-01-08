//random calculation with two random integers between [0, 9]
//print the calculation and its result
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int addition(int a, int b)
{
    return a + b;
}

int substraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int randCalc()
{
    int upper = 4;
    int lower = 1;
    int randomCalc = (rand() % (upper-lower+1)) + lower;
    return randomCalc;
}

int randNum()
{
    int upper = 9;
    int lower = 0;
    int randomNum = (rand() % (upper-lower+1)) + lower;
    return randomNum;
}

int main(void)
{
    srand(time(NULL));

    int firstNum;
    int secondNum;
    int calc;

    firstNum = randNum();
    secondNum = rand+Num();

    calc = randCalc();

    if (calc == 1)
    {
        printf("%d + %d = %d", firstNum, secondNum, addition(firstNum, secondNum));
    }

    else if (calc == 2)
    {
        printf("%d - %d = %d", firstNum, secondNum, substraction(firstNum, secondNum));
    }

    else if (calc == 3)
    {
        printf("%d * %d = %d", firstNum, secondNum, multiplication(firstNum, secondNum));
    }

    else
    {
        printf("%d / %d = %d", firstNum, secondNum, division(firstNum, secondNum));
    }
}