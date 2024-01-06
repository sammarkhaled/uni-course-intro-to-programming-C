//1) square of a float x
//2) square of an int n
//3) add numbers from 0 to an int n (warning if n < 0)
//4) add numbers from int m to int n (warning if n < m)
#include <stdio.h>

float quadratEinerFliesskommazahl(float x)
{
    return x * x;
}

int quadratEinerGanzzahl(int n) 
{
    return n * n;
}

int summeDerErstenNNatuerlichenZahlen(int n) 
{
    int sum = 0;

    if (n > 0)
    {
        for (int i = 0; i < (n + 1); i++)
        {
            sum = sum + i;
        }
        return sum;
    }

    else
    {
        printf("n < 0!!!");
        return 0;
    }
}

void summeDerNatuerlichenZahlenVonMBisN(int m, int n)
{
    int sum = 0;

    if (m > n || m < 0 || n < 0)
    {
        printf("Fehler");
    }

    else
    {
        for(int i = 0; i < n; i++)
        {
            sum = sum + (m + i);
        }
        printf("%d", sum);
    }
}

int main (void)
{
    float x;
    int n, n1, n2, n3, m;

    printf("give me a float(square): ");
    scanf("%f", &x);
    float result = quadratEinerFliesskommazahl(x);
    printf("%f\n", result);


    printf("give me an int(square): ");
    scanf("%d", &n1);
    int result1 = quadratEinerGanzzahl(n1);
    printf("%d\n", result1);


    printf("give me an int(add until that int): ");
    scanf("%d", &n2);
    int result2 = summeDerErstenNNatuerlichenZahlen(n2);
    printf("%d\n", result2);

    printf("give me 2 int(add from first int until second int): \n");
    
    printf("m: ");
    scanf("%d", &m);

    printf("n: ");
    scanf("%d", &n3);

    summeDerNatuerlichenZahlenVonMBisN(m, n3);

    return 0;
}