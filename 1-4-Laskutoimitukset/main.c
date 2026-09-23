/*
 *
 * 4. Tee C-kielinen ohjelma, joka kysyy käyttäjältä kaksi kokonaislukua ja
 * tulostaa ensin syötetyt luvut, sitten niiden summan, erotuksen ja tulon
 * kokonaislukuna omille riveilleen sekä osamäärän desimaalilukuna kahden
 * desimaalin tarkkuudella.
 * Tulostusesimerkki:
 * Syötetyt luvut olivat __ ja __.
 * Lukujen summa on __.
 * Lukujen erotus __.
 * Lukujen tulo __.
 * Lukujen osamäärä __.
*/

#include <stdio.h>

int main()
{
    // luodaan muuttujat
    int number1;
    int number2;
    // kysy käyttäjältä luvut
    printf("Number1: ");
    scanf("%d", &number1);
    printf("Number2: ");
    scanf("%d", &number2);
    printf("The numbers entered are %d and %d", number1, number2);
    printf("Sum of numbers %d and %d is %d", number1, number2, number1+number2);
    return 0;
}
