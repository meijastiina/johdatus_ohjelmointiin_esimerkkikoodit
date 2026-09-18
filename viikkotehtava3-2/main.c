/*
 * 2. Tee C-kielinen ohjelma joka lukee kysyy käyttäjän nimen ja sen montako
 * kertaa se tulostetaan näytölle. Sitten tulostaa nimen näytölle em. kertaa.
 * Tee ratkaisu
 * a) while toistolla
 * b) do-while toistolla
 * c) for-toistolla
*/
#include <stdio.h>

int main()
{
    // luo muuttujat
    char name[50]; // merkkitaulukko nimelle
    int numberOfPrints; // kokonaisluku montako kertaa tulostetaan
    int i = 0; // iteraattori toistolausetta varten
    // kysyy käyttäjän nimen
    printf("Name: ");
    scanf("%s", &name);
    // kysy montako kertaa se tulostetaan näytölle
    printf("How many times do you want to print: ");
    scanf("%d", &numberOfPrints);
    // tulostaa nimen näytölle em. kertaa
    printf("\n----------- WHILE ----------------\n");
    while ( i < numberOfPrints )
    {
        printf("%s\n", name);
        i++;
    }

    printf("\n----------- DO WHILE ----------------\n");
    i = 0; // nollataan iteraattori
    do
    {
        printf("%s\n", name);
        i++;
    } while ( i < numberOfPrints );

    printf("\n----------- FOR ----------------\n");
    for ( int i = 0; i < numberOfPrints; i++)
    {
         printf("%s\n", name);
    }

    return 0;
}
