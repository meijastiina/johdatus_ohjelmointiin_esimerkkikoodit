/*Luo sovellus joka:
• Kysyy käyttäjältä salanumeron
• Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja
ohjelma päättyy
Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan. (Käytä while tai do-while -toistorakennetta)

*/
#include <stdio.h>

int main()
{
    // Luo muuttuja käyttäjän syöttämälle luvulle
    int userNumber = 0;
    // Pyydä käyttäjältä aina uusi luku niin kauan kunnes syötetään 17
    while ( userNumber != 17 )
    {
        // Kysy käyttäjältä salanumero
        printf("Enter number: ");
        // lue käyttäjän syöte
        scanf("%d", &userNumber);
        //printf("Entered number is %d", userNumber);
    }
    // Jos salanumero on 17
        // onnittele käyttäjää
    printf("Congrats!");

    return 0;
}
