//print the size of different data types in bits
#include <stdio.h>

int main(void)
{
    printf("Datentypen in Bits:\n\n");
    
    printf("char: %d Byte\n", sizeof(char));
    printf("int: %d Bits\n", sizeof(int));
    printf("short: %d Bits\n", sizeof(short));
    printf("float: %d Bits\n", sizeof(float));
    printf("double: %d Bits\n", sizeof(double));

    return 0;
}