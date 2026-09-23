/*
 * . Luo sovellus joka:
 * • Kysyy käyttäjältä salanumeron
 * • Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja
 * ohjelma päättyy
 * Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan. (Käytä
 * whiletai do-while -toistorakennetta)
*/
#include <stdio.h>

int main()
{
    // luo muuttujat
    int number;
    // Kysyy käyttäjältä salanumeron
    // printf("Enter secret number: ");
    // scanf("%d", &number);
    // jos salanumero on 17
    // while ( number != 17)
    // {
    //     // onnittelee käyttäjää onnistuneesta valinnasta
    //     printf("Enter secret number: ");
    //     scanf("%d", &number);
    // }
    do
    {
        // onnittelee käyttäjää onnistuneesta valinnasta
        printf("Enter secret number: ");
        scanf("%d", &number);
    } while ( number != 17);
    // Jos käyttäjän syöttämä numero ei ole 17
        // sovellus kysyy numeroa uudestaan
    printf("Oikein meni!");



    return 0;
}
