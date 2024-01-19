//get a char by the user and look for it in the given char
//if found in the char, print its position
//else print that it is not included
#include <stdio.h>

char word[] = "asdako234kfao874f<dsj11llasd9as8kg%\"+asd90101jgj";

int main(void)
{
    char searched;
    char check;
    int position;
    int found = 0;

    printf("Enter character: ");
    scanf("%c", &searched);

    for(int i = 0; i < 48; i++)
    {
        check = word[i];
        position = i + 1;
        if (searched == check)
        {
            printf("%c was found at position %d in the list.\n", searched, position);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("The symbol was not found in the list.\n");
    }

    return 0;
}
