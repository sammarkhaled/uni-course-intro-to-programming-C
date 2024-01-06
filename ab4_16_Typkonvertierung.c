//calculations with mixed datatypes (int, float, double)
#include <stdio.h>

int main(void)
{
    float eins = 12.0/8/2;
    float zwei = 5.0/50*10;
    double drei = 3.0/6/9;

    printf("12/8/2 = %.2f\n", eins);
    printf("5/50*10 = %.1f\n", zwei);
    printf("3/6/9 = %.7f\n", drei);
}
 