//4 family members cannot decide who will go to a birthdayparty
//criteria:
/*
1. at least one of them has to go
2. if Alfons goes, Doris does not
3. if Beate goes, Christian goes as well
4. if Alfons and Christian go, Beate stays home
5. if Alfons stays at home, either Doris or Christian go
*/
#include <stdio.h>

int main()
{
    char familienmitglieder[] = {'A', 'B', 'C', 'D'};
    
    printf("Moegliche Gruppierungen für die Geburtstagsfeier:\n");

    for(int a = 0; a <= 1; a++)
    {
        for(int b = 0; b <= 1; b++)
        {
            for(int c = 0; c <= 1; c++)
            {
                for(int d = 0; d <= 1; d++)
                {
                    if (!(a == 0 && b == 0 && c == 0 && d == 0))
                    {
                        if (!(a == 1 && d == 1))
                        {
                            if (!(b == 1 && c == 0))
                            {
                                if (!(a == 1 && c == 1 && b == 1))
                                {
                                    if (!(a == 0 && c == 0 && d == 0)) 
                                    {
                                        printf("%c%c%c%c\n", familienmitglieder[a], familienmitglieder[b], familienmitglieder[c], familienmitglieder[d]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}