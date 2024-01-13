//get any word from the user and save it in an char array
//use a loop to get the length of the word
#include <stdio.h>

int main(void)
{
    int count = 0;

    char word[50];
    printf("Enter your word: ");
    scanf("%49s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }

    printf("The length of your word is %d characters.\n", count);

    return 0;
}
