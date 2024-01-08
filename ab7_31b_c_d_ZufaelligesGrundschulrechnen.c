//random calculation with two random integers between [0, 9]
//print 10 random calculations and their results
//if division and second number == 0 -> not defined, else float as a result
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

float division(int a, int b)
{
    return (float) a / b;
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

    for(int i = 0; i < 10; i++)
    {
        firstNum = randNum();
        secondNum = randNum();
        calc = randCalc();

        if (calc == 1)
        {
            printf("%d + %d = %d\n", firstNum, secondNum, addition(firstNum, secondNum));
        }

        else if (calc == 2)
        {
            printf("%d - %d = %d\n", firstNum, secondNum, substraction(firstNum, secondNum));
        }

        else if (calc == 3)
        {
            printf("%d * %d = %d\n", firstNum, secondNum, multiplication(firstNum, secondNum));
        }

        else
        {
            if(secondNum == 0)
            {
                printf("%d / %d = not defined\n", firstNum, secondNum);
            }

            else
            {
                printf("%d / %d = %.3f\n", firstNum, secondNum, division(firstNum, secondNum));
            }
        }
    }
    return 0;
}