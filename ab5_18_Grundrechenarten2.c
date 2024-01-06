//use two ints by the user to perform all 4 arithmetic methods with them
//if the divisor == 0 -> not defined
//else integer and float division
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0)
    {
        printf("%d / %d = %d(GZ-Div.) bzw. %f(FK-Div.)\n", a, b, a / b, (float)a / b);
    }

    else
    {
        printf("%d / %d = division durch 0 nicht definiert", a, b);
    }

    return 0;
}