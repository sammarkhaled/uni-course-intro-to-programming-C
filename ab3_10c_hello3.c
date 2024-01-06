//get a name from the user and tell them what their name is
#include <stdio.h>

int main(void)
{
    printf("Enter your name: ");
    char name[100];
    scanf("%99s", name);
    
    printf("Your name is %s.", name);
    
    return 0;
}