//get char from user
//if char is a symbol of a chemical element -> print the name of the element
//else print "no chemical element"
//if char == 0 -> leave the programm
#include<stdio.h>

int main(void)
{
    
    char element = '1';
    while(element != '0')
    {
        printf("Eingabe(0 to exit): ");
        scanf(" %c", &element);
    
        if(element == 'H' || element == 'h')
        {
            printf("Wasserstoff");
        }   

        else if (element == 'B' || element == 'b')
        {
            printf("Bor\n");
        }

        else if (element == 'C' || element == 'c')
        {
            printf("Kohlenstoff\n");
        }

        else if (element == 'N' || element == 'n')
        {
            printf("Stickstoff\n");
        }

        else if (element == 'O' || element == 'o')
        {
            printf("Sauerstoff\n");
        }

        else if (element == 'F' || element == 'f')
        {
            printf("Fluor\n");
        }

        else if (element == 'P' || element == 'p')
        {
            printf("Phosphor\n");
        }

        else if (element == 'S' || element == 's')
        {
            printf("Schwefel\n");
        }

        else if (element == 'K' || element == 'k')
        {
            printf("Kalium\n");
        }

        else if (element == 'V' || element == 'v') 
        {
            printf("Vanadium\n");
        }

        else if (element == 'Y' || element == 'y')
        {
            printf("Yttrium\n");
        }

        else if (element == 'I' || element == 'i')
        {
            printf("Iod\n");
        }

        else if (element == 'W' || element == 'w')
        {
            printf("Wolfram\n");
        }

        else if (element == 'U' || element == 'u')
        {
            printf("Uran\n");
        }

        else
        {
            if (element == '0')
            {
                printf("Byebye<3\n");
            }
            else
            {
                printf("Kein chemisches Element\n");
            }
        }

    }
}
    