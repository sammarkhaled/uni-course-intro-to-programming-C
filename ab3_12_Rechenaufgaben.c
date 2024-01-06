//perform different calculations with pre-defined variables
#include <stdio.h>

int main(void)
{
    double a, b, c, p;
    a = 2.0;
    b = 3.0;
    c = 0.4E1;
    p = 3.14;

    printf("a) %.1lf\n", 5 * a + 76 + 3.1);
    printf("b) %lf\n", (a + 6)/(2 * p * a + (1 / a)));
    printf("c) %lf\n", a + (b - (p / c)) / (a + (c / a - (1 / b))));
    printf("d) %.2lf\n", 1 / (a * a));
    printf("e) %.2lf\n", 1 / ((-a) * (-a)));

    return 0;
}