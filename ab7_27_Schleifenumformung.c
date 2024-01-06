//change the while loop in the code fragment to a do while loop with the same meaning
#include <stdio.h>

int main(void)
{
    int n, sum;
    //...
    scanf("%d", &n);
    sum = 0;
    if(n > -3)
    {
        do
        {
            sum += n;
            n--;
        } while ( n > -3 );
    }

    return 0;
}