//increment and decrement an int (prefix and postfix)
#include <stdio.h>

int main(void)
{
    int n;
    printf("number: ");
    scanf("%d", &n);
    printf("Um eins erhoeht (Praefix): %d\n", ++n);
    printf("Um eins erhoeht (Postfix): %d\n", n++);
    printf("Um eins vermindert (Praefix): %d\n", --n);
    printf("Um eins vermindert (Postfix): %d\n", n--);

    return 0;
}