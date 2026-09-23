/*Tee ohjelma jossa on pääohjelma (main-funktio) sekä yksi funktio eli aliohjelma,
 * joka kysyy float-luvun käyttäjältä, kertoo luvun kolmella ja palauttaa tuloksen
 * main()-funktiolle, jossa tulos tulostetaan näytölle.
*/
#include <stdio.h>

// funktioiden esittelyt (prototyyppi)
 float multiplyByThree();

int main()
{
    // kutsu funktiota
    float number = multiplyByThree();
    // tulosta funktion paluuarvo
    printf("%f", number);
    printf("%f", multiplyByThree());
    return 0;
}

/*
 * funktio eli aliohjelma, joka kysyy float-luvun käyttäjältä, kertoo luvun kolmella
 * ja palauttaa tuloksen main()-funktiolle
 * Parametrit:  -
 * Paluuarvo:   float: annettu luku kerrottuna kolmella
 */
 float multiplyByThree()
 {
    // luo muuttujat
    float number;
    // kysyy float-luvun käyttäjältä
    printf("Number: ");
    scanf("%f", &number);
    // kertoo luvun kolmella
    number = number * 3;
    // palauttaa tuloksen
    return number;
 }
