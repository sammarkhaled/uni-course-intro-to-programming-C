//get name from user and greet user with their name 25 times
#include <stdio.h>

int main(void)
{
    char name[100];

    printf("Enter your name: ");
    scanf("%99s", &name);

    for(int i = 0; i < 25; i++)
    {
        printf("Hello, %s\n", name);
    }
}