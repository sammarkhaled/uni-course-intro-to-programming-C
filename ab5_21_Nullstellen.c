//get values from the user and create a square function
//determine if there is no, one or two zero points and print them
#include <stdio.h>
#include <math.h>

float pqFormelPlus(float p, float q)
{
    return (-p)/2 + (sqrt((p/2)*(p/2)-q));
}

float pqFormelMinus(float p, float q)
{
    return (-p)/2 - (sqrt((p/2)*(p/2)-q));
}

int main(void)
{
    double a, b, c, nullstelle1, nullstelle2;

    printf("a:\n");
    scanf("%lf", &a);

    printf("b:\n");
    scanf("%lf", &b);

    printf("c:\n");
    scanf("%lf", &c);
    
    printf("Die Funktion lautet %lfx^2 + %lfx + %lf\n", a, b, c);

    double p = b / a;
    double q = c / a;

    if(((p/2)*(p/2)-q) < 0)
    {
        printf("Die Funktion hat keine Nullstellen.\n");
        return 0;
    }
    else
    {
    nullstelle1 = pqFormelPlus(p, q);
    nullstelle2 = pqFormelMinus(p, q);

    if (nullstelle1 == nullstelle2)
    {
        printf("Die gemeinsame Nullstelle lautet %lf", nullstelle1);
    }
    else
    {
        printf("Die Nullstellen lauten %lf und %lf.\n", nullstelle1, nullstelle2);
    }
    }
}