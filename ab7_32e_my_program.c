#include <stdio.h>
#include "ab7_32b_my_math_functions.h"

void main(void)
{
    int a = -3;
    printf("Der Absolutwert von %d ist: %d\n", a, absWertInt(a) );
    double b = -2.7;
    printf("Der Absolutwert von %lf ist: %lf\n", b, absWertDouble(b) );
}