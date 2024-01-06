//modify for-loop to get the uneven numbers from 13 to 25
#include<stdio.h>

int main()
{
    int i = 13;
    int j = 27;

    for(i; i < j-1; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
