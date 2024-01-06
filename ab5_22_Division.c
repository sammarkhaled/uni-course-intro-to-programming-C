//get an int of seconds from the user (if number invalid -> use pre-defined constant c)
//display it in the following format: s = w + d + h + min + s
#include <stdio.h>

int main() 
{
    int weeks, days, hours, minutes, seconds;
    const int c = 1000000000;

    printf("Geben Sie die Anzahl der Sekunden ein: ");
    scanf("%d", &seconds);
    if(seconds < 0)
    {
        seconds = c;
    }
    
    weeks = seconds / (7 * 24 * 60 * 60);
    seconds %= 7 * 24 * 60 * 60;
    
    days = seconds / (24 * 60 * 60);
    seconds %= 24 * 60 * 60;
    
    hours = seconds / (60 * 60);
    seconds %= 60 * 60;
    
    minutes = seconds / 60;
    seconds %= 60;

    printf("%u Sekunden = %u W + %u d + %u h + %u min + %u s\n", seconds, weeks, days, hours, minutes, seconds);

    return 0;
}
