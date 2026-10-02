/*
 * Tee aliohjelma tulostaPaikallinenOsoite.
Aliohjelma luo paikallisen merkkijonotaulukon nimeltään "lisatiedot" ja täyttää sen käyttäjän
syötteellä.
Sen jälkeen aliohjelma tulostaa merkkijonon 1. merkin ja lopetusmerkin (arvo 0 tai merkki ’\0’)
osoitteen muistissa.
"Lisatiedot-merkkijonon 1. merkin osoite on: ... ja lopetusmerkin osoite on: ..."
*/
#include <stdio.h>
#include <string.h>

// Funktion prototyyppi
void printLocalAddress();

int main()
{
    // Kutsu funktiota
    printLocalAddress();
    return 0;
}

// Tee aliohjelma tulostaPaikallinenOsoite.
void printLocalAddress()
{
    // luo paikallisen merkkijonotaulukon nimeltään "lisatiedot"
    char additionalInfo[10];
    int testi = 6;
    int lastCharIndex;
    int i = 0;
    // täyttää sen käyttäjän syötteellä.
    printf("\nAdditional info: ");
    scanf("%s", additionalInfo);
    // Selvitä merkkijonon pituus
    while ( additionalInfo[i] != '\0')
    {
        i++;
    }
    lastCharIndex = i;
    lastCharIndex = strlen(additionalInfo);
    // Sen jälkeen aliohjelma tulostaa merkkijonon 1. merkin ja lopetusmerkin (arvo 0 tai merkki ’\0’) osoitteen muistissa.
    printf("\nFirst char value in string is %c", additionalInfo[0]);
    printf("\nFirst char address in string is %p", additionalInfo[0]);
    printf("\nFirst char address in string is %p", &additionalInfo[0]);
    printf("\nFirst char address in string is %p", additionalInfo);
    printf("\ntesti variable value is %d and address is %p", testi, &testi);
    printf("\ntesti variable value is %d and address is %p", testi, testi);
    //  T e s t i \0
    //  0 1 2 3 4 5
    printf("\nLast char value in string is %c", additionalInfo[lastCharIndex - 1 ]);
    printf("\nLast char address in string is %p", &additionalInfo[lastCharIndex - 1 ]);
}
