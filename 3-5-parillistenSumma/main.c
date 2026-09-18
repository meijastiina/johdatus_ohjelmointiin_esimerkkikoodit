/*
 * 5. Tee ohjelma, joka lukee käyttäjältä kokonaisluvun. Sitten ohjelma summaa tähän lukuun asti
kaikkien parillisten lukujen arvot ja tulostaa summan näytölle. (HUOM luku%2 jakojäännös
on nolla parillisilla luvuilla) (Jos käyttäjä syöttää luvun 8 niin ohjelma tulostaa luvun 20
(0+2+4+6+8)
*/
#include <stdio.h>

int main()
{
    // Luodaan muuttuja käyttäjän syöttämälle luvulle
    int number;
    // Luodaan muuttuja summalle
    int sum = 0;
    // Pyydä käyttäjää syöttämään luku
    printf("Enter number: ");
    // Lue käyttäjän syöttämä luku
    scanf("%d", &number);
    for( int i = 0; i <= number; i+=2 )
    {
        sum +=i;
    }
    printf("%d ", sum);
    return 0;
}
