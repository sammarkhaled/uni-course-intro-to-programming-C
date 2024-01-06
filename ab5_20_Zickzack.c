//Change the value of an int i to print "Zickzack-Muster"
#include <stdio.h>

int main(void)
{
int i = 1;
i = --i;

if (--i)
{
    printf("Zick");
}
else
{
    printf("zack-");
}
i = (++i)%2;

if ( (++i)%2 )
{
    printf("zack-");
}
else
{
    printf("Zick");
}
i = 20;
if ((--i) > 10)
{
    printf("Muster");
}
else
{
    printf("#@!=");
}

printf("\n");

return 0;
}