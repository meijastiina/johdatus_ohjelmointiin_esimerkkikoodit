/* Tee ohjelma, joka tulostaa käyttäjän syöttämän kokonaisluvun kymmenen
 * kertotaulun eli, jos käyttäjä syöttää luvun 5 tulostuu seuraavaa:
 * 5*1=5
 * 5*2=105*3=15
 * …jne. 5*10=50 asti.
 */

#include <stdio.h>

int main()
{
    // Luo muuttujat
    int number, number2 = 1; // käyttäjän syöttämä luku

    // Pyydä käyttäjää syöttämään luku
    printf("Number: ");
    // Lue käyttäjän syöttämä luku muuttujaan
    scanf("%d", &number);
    while ( number2 <= 10)
    {
        printf("%d * %d = %d\n", number, number2, number * number2);
        number2++;
    }
    for ( int number = 1; number <= 10; number++)
    {
        printf("\n---- Multiplication table for %d ----\n", number);
        for ( int number2 = 0; number2 <= 10; number2++)
        {
            printf("%d * %d = %d\n", number, number2, number * number2);
        }
    }
    return 0;
}
