#include <stdio.h>

int main(void)
{
    int exponent;
    int basis;
    int ergebnis = 1;

    printf("Basis: ");
    scanf("%d", &basis);

    do
    {
        printf("Exponent: ");
        scanf("%d", &exponent);

        if (exponent < 0)
        {
            printf("Exponent ist negativ!\n");
        }
    } while(exponent < 0);

    for(int i = 0; i < exponent; i++)
    {
        ergebnis = ergebnis * basis;
    }

    printf("%d^%d = %d", basis, exponent, ergebnis);

    return 0;
}