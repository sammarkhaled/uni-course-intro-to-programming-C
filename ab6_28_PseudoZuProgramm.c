//translate pseudo code into real code
//get an int a from the user
//show a right-angled triangle on the screen (as many rows as int a)
#include <stdio.h>

int main(void)
{
    int a;
    printf("a: "); 
    scanf("%d", &a);

    if (a > 0)
    {
        int i, j;

        i = 0;
        while (i < a)
        {
            j = 0;
            while (j <= i)
            {
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
    }
    
    return 0;
}