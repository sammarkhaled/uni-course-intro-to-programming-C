//use two ints by the user to perform all 4 arithmetic methods with them
//if the divisor == 0 -> not defined
#include <stdio.h>

int main(void)
{
    float a;
    float b;

    printf("Enter your first number: ");
    scanf("%f", &a);

    printf("Enter your second number: ");
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    if (b != 0)
    {
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    }

    else
    {
        printf("%.2f / %.2f = division durch 0 nicht definiert", a, b);
    }
    
    return 0;
}