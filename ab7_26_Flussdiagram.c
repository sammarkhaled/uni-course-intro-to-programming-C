//translate a diagram into code
//sorting int a, b, c in ascending order
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("a: ");
    scanf("%d", &a);

    
    printf("b: ");
    scanf("%d", &b);

    
    printf("c: ");
    scanf("%d", &c);

   do {
        if (a > b)
        {
            int n = a;
            a = b;
            b = n;
        }

        if (b > c)
        {
            int n = b;
            b = c;
            c = n;
        }
    } while (a > b);

    
    printf("The numbers in order are: %d, %d, %d\n", a, b, c);

    return 0;
}