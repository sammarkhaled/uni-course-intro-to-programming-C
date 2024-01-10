#include <stdio.h>

int main(void)
{
    int exponent;
    int basis;
    int ergebnis = 1;
    int i = 0;

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
    
    if (exponent > 0)
    {
        do 
        {
            ergebnis = ergebnis * basis;
            i++;
        } while(i < exponent);
    }

    printf("%d^%d = %d", basis, exponent, ergebnis);

    return 0;
}