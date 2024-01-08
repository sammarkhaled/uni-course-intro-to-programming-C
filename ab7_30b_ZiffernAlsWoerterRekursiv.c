//create a function wort() that takes a digit and prints it as a word
//convert an int from the user to words
//if the number is negative, print "minus" before it
//using a recursive function
#include <stdio.h>

void wort(int z)
{
    if (z == 1)
    {
        printf("eins ");
    } 
    else if (z == 2)
    {
        printf("zwei ");
    }
    else if (z == 3)
    {
        printf("drei ");
    }
    else if (z == 4)
    {
        printf("vier ");
    }
    else if (z == 5)
    {
        printf("fuenf ");
    }
    else if (z == 6)
    {
        printf("sechs ");
    }
    else if (z == 7)
    {
        printf("sieben ");
    }
    else if (z == 8)
    {
        printf("acht ");
    }
    else if (z == 9)
    {
        printf("neun ");
    }
    else
    {
        printf("null ");
    }
}

void printZahl(int zahl, int negativ)
{
    if (zahl < 0)
    {
        negativ = 1;
        zahl = zahl * (-1);
    }

    if (negativ == 1)
    {
        printf("minus ");
    }

    if (zahl == 0)
    {
        wort(0);
    }
    else
    {
        printZahl(zahl / 10, negativ);
        wort(zahl % 10);
    }
}

int main(void)
{
    int zahl;

    printf("Gib eine Zahl ein: ");
    scanf("%d", &zahl);

    printZahl(zahl, 0);

    return 0;
}
