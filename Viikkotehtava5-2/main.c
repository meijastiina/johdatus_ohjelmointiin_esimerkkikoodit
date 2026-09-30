/*
 * Kirjoita ohjelma, -jossa on tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
Luo Car-tyyppinen muuttuja nimeltään car_1.
Lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot.
Lisää koodi, jolla tulostetaan car_1:n tiedot.
2. Kirjoita ohjelma, jossa on samanlainen tietue Car kuin edellä.
Luo Car-tyyppinen taulukko, johon voidaan tallentaa 3 alkiota.
Lisää koodi, jolla käyttäjältä kysellään kolmen auton tiedot ja ne tallennetaan em. taulukkoon.
Lisää koodi, jolla em. autojen tiedot tulostetaan ruudulle.
*/
#include <stdio.h>

/*tietue nimeltään Car, jossa seuraavat kentät:
• brand CHAR(20)
• model CHAR(50)
• yearModel INT
*/
struct Car {
    char brand[20];
    char model[50];
    int yearModel;
};

int main()
{
    // Luo Car-tyyppinen taulukko, johon voidaan tallentaa 3 alkiota.
    struct Car cars[3];
    // Luo Car-tyyppinen muuttuja nimeltään car_1.
    struct Car car_1;
    // Lisää koodi, jolla käyttäjältä kysellään kolmen auton tiedot ja ne tallennetaan em. taulukkoon.
    for ( int i = 0; i < 3; i++ )
    {
        // Lisää koodi, jossa käyttäjältä kysytään car_1:n tiedot.
        printf("\nCar1 brand: ");
        scanf("%s", cars[i].brand);
        printf("\nCar1 model: ");
        scanf("%s", cars[i].model);
        printf("\nCar1 year model: ");
        scanf("%d", &cars[i].yearModel);
    }
    // Lisää koodi, jolla em. autojen tiedot tulostetaan ruudulle.
    for ( int i = 0; i < 3; i++ )
    {
        printf("\nCar %d is %s %s %d", i+1, cars[i].brand, cars[i].model, cars[i].yearModel);
    }

    return 0;
}
