//perform calculations with pre-defined variables 
//with parentheses and without to understand the order of calculations
#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int p = 5;
    int q = 6;
    int r = 7;

    printf("i) %i\n", a*b*c*d);
    printf("ii) %i\n", a - b % 2 > 7);
    printf("iii) %i\n", a*3/4/2);
    printf("iv) %i\n", p || !q < r);
    printf("v) %i\n", p && q || !r);
    printf("vi) %i\n\n", p || !q && r);
    
    printf("Mit Klammern:\n");
    printf("i) %i\n", (a*b)*(c*d));
    printf("ii) %i\n", (a-(b%2))>7);
    printf("iii) %i\n", ((a*3)/4)/2);
    printf("iv) %i\n", (p || !q) < r);
    printf("v) %i\n", (p && q) || !r);
    printf("vi) %i\n", (p || !q) && r);
    
    return 0;
}