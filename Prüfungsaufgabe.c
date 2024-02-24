/* 
-custom datatype, with typedef, 'SongData'
-variables for singer[50], title[100] and year
-global variable copy into code, array with 40 songs
-function called 'raterunde', no parameters, returns the difference between actual year and guessed year
-initialize random num generator
-ask for how many rounds player wants to play until its between 1 and 10
-calculate the percentage of how much the user guessed wrong
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _songdata
{
    char interpret[50];
    char titel[100];
    int erscheinungsjahr;
} SongData;

SongData songs[40] = {
    {"Michael Jackson", "Thriller", 1982},
    {"The Beatles", "Hey Jude", 1968},
    {"Queen", "Bohemian Rhapsody", 1975},
    {"Elton John", "Rocket Man", 1972},
    {"Whitney Houston", "I Will Always Love You", 1992},
    {"Bob Marley", "No Woman, No Cry", 1974},
    {"Madonna", "Like a Prayer", 1989},
    {"John Lennon", "Imagine", 1971},
    {"Stevie Wonder", "Superstition", 1972},
    {"Led Zeppelin", "Stairway to Heaven", 1971},
    {"The Rolling Stones", "(I Can't Get No) Satisfaction", 1965},
    {"Nirvana", "Smells Like Teen Spirit", 1991},
    {"U2", "With or Without You", 1987},
    {"The Police", "Every Breath You Take", 1983},
    {"David Bowie", "Space Oddity", 1969},
    {"Pink Floyd", "Comfortably Numb", 1979},
    {"Prince", "Purple Rain", 1984},
    {"The Eagles", "Hotel California", 1976},
    {"Adele", "Rolling in the Deep", 2010},
    {"Bee Gees", "Stayin' Alive", 1977},
    {"Guns N' Roses", "Sweet Child o' Mine", 1987},
    {"Elvis Presley", "Can't Help Falling in Love", 1961},
    {"Bruce Springsteen", "Born to Run", 1975},
    {"Metallica", "Enter Sandman", 1991},
    {"Frank Sinatra", "My Way", 1969},
    {"The Beach Boys", "Good Vibrations", 1966},
    {"Johnny Cash", "Ring of Fire", 1963},
    {"Aretha Franklin", "Respect", 1967},
    {"ABBA", "Dancing Queen", 1976},
    {"Celine Dion", "My Heart Will Go On", 1997},
    {"Eminem", "Lose Yourself", 2002},
    {"Oasis", "Wonderwall", 1995},
    {"The Doors", "Light My Fire", 1967},
    {"The Supremes", "You Can't Hurry Love", 1966},
    {"Frankie Valli", "Can't Take My Eyes Off You", 1967},
    {"Blur", "Song 2", 1997},
    {"Radiohead", "Creep", 1992},
    {"Queen", "Another One Bites the Dust", 1980},
    {"AC/DC", "Back in Black", 1980},
    {"The Beatles", "Let It Be", 1970}
};

int raterunde(void)
{
    int lower = 0;
    int upper = 39;
    int year;
    int difference = 0;

    int randomSong =  (rand() % (upper-lower+1)) + lower;

    do
    {
        printf("In which year was %s by %s published?\n", songs[randomSong].titel, songs[randomSong].interpret);
        scanf("%d", &year); 

        if(year < 1950 || year > 2024)
        {
            printf("The year u entered is not valid.\n");
        }

    } while(year < 1950 || year > 2024);

    if (year != songs[randomSong].erscheinungsjahr)
    {
        printf("Wrong:( The correct answer was %d\n", songs[randomSong].erscheinungsjahr);

        if (year > songs[randomSong].erscheinungsjahr)
        {
            difference = year - songs[randomSong].erscheinungsjahr;
            return difference;
        }

        else 
        {
            
            difference = songs[randomSong].erscheinungsjahr - year;
            return difference;
        }
    }

    else
    {
        printf("That was correct, the song was published in %d,\n", songs[randomSong].erscheinungsjahr);
        return difference;
    }
}

int main(void)
{
    int runden;
    int difference;
    int sumDifference = 0;
    float averageDifference;

    do
    {
        printf("How many rounds do you want to play? [1-10]: ");
        scanf("%d", &runden);
    } while(runden < 1 || runden > 10);

    for (int i = 0; i < runden; i++)
    {
        printf("Round %d:\n", (i + 1));
        difference = raterunde();
        sumDifference += difference;
    }
    averageDifference = ((float)sumDifference / (runden * 40)) * 100;
    printf("On average, your answers where %.2f accurate.\n", 100 - averageDifference);

    return 0;
}