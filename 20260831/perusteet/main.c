/*
 * Kirjoita koodi, joka
Määrittelee kaksi muuttujaa, number1 ja number2.
Asettaa näille muuttujille arvot.
Tulostaa näytölle: "Number1 value is [number1] and number2 value is [number2]."
 */
#include <stdio.h>

// Tästä alkaa pääohjelma
int main()
{
    // Määrittelee kaksi muuttujaa, number1 ja number2.
    int number1;
    int number2;
    // Asettaa näille muuttujille arvot.
    number1 = 15;
    number2 = 5;
    // Tulostaa näytölle: "Number1 value is [number1] and number2 value is [number2]
    printf("Number1 value is %d and number2 value is %d", number1, number2);
    int age;
    printf("\nAge: ");
    scanf("%d", &age);
    printf("\nAge entered is %d ", age);
    return 0;
}
