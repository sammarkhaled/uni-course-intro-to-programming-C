//declare an int array[10] as a global variable and get its elements in main
//create a function that prints its elements
//create a function that adds the elements together and call it in main
//invert the numbers in the array and print the sum of the inverted numbers
#include <stdio.h>

//global
int zahlen[10];

void ausgabe()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d) %d\n", i + 1, zahlen[i]);
    }
}

int summe(int a[])
{
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main(void)
{

    for(int i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &zahlen[i]);
    }

    int inventierteZahlen[10];

    for(int i = 0; i < 10; i++)
    {
        inventierteZahlen[i] = zahlen[i] * (-1);
    }

    ausgabe(zahlen);

    printf("Summe: %d\n", summe(zahlen));
    printf("Summe inventierter Zahlen: %d\n", summe(inventierteZahlen));
    
    return 0;
}