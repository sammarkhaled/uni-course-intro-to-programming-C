//get two strings from the user and check if they are identical
//if they are not, check if and how many times one string contains the other
//do not include any additional libraries
#include <stdio.h>

int areStringsIdentical(char s1[], char s2[])
{
    int i;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) 
    {
        if (s1[i] != s2[i])
        {
            printf("The strings are not identical.\n");
            return 0;
        }
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        printf("The strings are identical.\n");
        return 1;
    } 
    else 
    {
        printf("The strings are not identical.\n");
        return 0;
    }
}

void doStringsContain(char s1[], char s2[]) 
{
    int count = 0;
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) 
    {
        int found = 1;
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i + j] != s2[j])
            {
                found = 0;
                break;
            }
        }
        
        if (found)
        {
            count++;
        }
    }
    printf("'%s' contains '%s' %d times.\n", s1, s2, count);
}

int main(void)
{
    char string1[100];
    char string2[100];

    printf("First string: ");
    scanf("%99s", string1);

    printf("Second string: ");
    scanf("%99s", string2);

    if (!areStringsIdentical(string1, string2)) 
    {
        doStringsContain(string1, string2);
        doStringsContain(string2, string1);
    }
    return 0;
}
