//create a function wort() that takes a digit and prints it as a word
//convert an int from the user to words
//if the number is negative, print "minus" before it
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
    else if(z == 9)
    {
        printf("neun ");
    }
    else
    {
        printf("null ");
    }
}

int main(void)
{
    int zahl;
    int ziffer;
    int negativ;

    printf("Gib eine Zahl ein: ");
    scanf("%d", &zahl);

    if (zahl < 0)
    {
        zahl = zahl * (-1);
        negativ = 1;
    }
    if (negativ == 1)
    {
        printf("minus ");
    }

    int wörter[10];
    int i = 0;

    while (zahl > 0)
    {
        ziffer = zahl % 10;
        wörter[i] = ziffer;
        i++;
        zahl /= 10;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        wort(wörter[j]);
    }

    return 0;
}
