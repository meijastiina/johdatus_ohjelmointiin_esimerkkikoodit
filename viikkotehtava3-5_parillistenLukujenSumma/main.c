/*. Tee ohjelma, joka lukee käyttäjältä kokonaisluvun. Sitten ohjelma summaa tähän lukuun asti
kaikkien parillisten lukujen arvot ja tulostaa summan näytölle. (HUOM luku%2 jakojäännös
on nolla parillisilla luvuilla) (Jos käyttäjä syöttää luvun 8 niin ohjelma tulostaa luvun 20
(0+2+4+6+8)
*/

#include <stdio.h>

int main()
{
    // Luo muuttujat
    int number;
    int sum = 0;

    // Kysy kokonaisluku
    printf("Number: ");
    scanf("%d", &number);
    // Toistolause joka toistuu nollasta syötettyyn lukuun saakka
    for ( int i = 0; i <= number; i++)
    {
        // JOS luku on parillinen
        if ( i % 2 == 0 )
        {
            // tulosta luku
            printf("%d ", i);
            sum = sum + i;
        }
    }
    // tulosta summa
    printf("\nSum is %d", sum);
    return 0;
}
