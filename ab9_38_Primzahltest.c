//checks whether integer n is a prime number
//prompt the user for n as long as n is not bigger than 1
//add the functionality to also print the prime number before and after n
#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int primeBefore(int n)
{
    int prime = 0;

    for (int i = 2; i <= (n - 1); i++)
    {
        if (isPrime(i) == 1)
        {
            prime = i;
        }
    }
    return prime;
}

int primeAfter(int n)
{
    int prime;

    for (int i = n + 1; i < (n + 50); i++)
    {
        if (isPrime(i) == 1)
        {
            prime = i;
            return prime;
        }
    }
}

int main(void)
{
    int n;
    int check;
    int primeBef;
    int primeAft;

    do
    {
        printf("n: ");
        scanf("%d", &n);
        if(n <= 1)
        {
            printf("n has to be bigger than 1!\n");
        }
    }while(n <= 1);
    check = isPrime(n);

    if (check == 1)
    {
        printf("%d is a Prime Number!\n", n);
    }

    else
    {
        printf("%d is not a prime number!\n", n);
    }

    primeBef = primeBefore(n);
    primeAft = primeAfter(n);

    if (primeBef == 0)
    {
        printf("There is no Prime Number before %d\n");
    }

    else
    {
        printf("Prime Number before: %d\n", primeBef);
    }

    printf("Next Prime Number: %d\n", primeAft);

    return 0;
}
