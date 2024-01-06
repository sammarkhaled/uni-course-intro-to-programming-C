//generate a random number to simulate a dice and a coin flip
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Wuerfel(void)
{
    int upperWuerfel = 6;
    int lowerWuerfel = 1;
    int randomWuerfel = (rand() % (upperWuerfel-lowerWuerfel+1)) + lowerWuerfel;
    return randomWuerfel;
}

int Muenze(void)
{
    int upperMuenze = 1;
    int lowerMuenze = 0;
    int randomMuenze = (rand() % (upperMuenze-lowerMuenze+1)) + lowerMuenze;
    return randomMuenze;
}

int main(void)
{
    int restart = 1;
    srand(time(NULL));

    do
    {
    int WuerfelErg = Wuerfel();
    int MuenzeErg = Muenze();

    printf("Wuerfel: %d\n", WuerfelErg);

    if (MuenzeErg == 0)
    {
        printf("Muenze: Kopf\n");
    }

    else
    {
        printf("Muenze: Zahl\n");
    }

    printf("Neustart? Ja[0] Nein[1]\n");
    
    scanf("%d", &restart);

    } while(restart == 0);

    return 0;
}