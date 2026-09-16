#include <stdio.h>

int main()
{
    // luodaan muuttuja käyttäjän syöttämälle luvulle
    int number;
    // Prompt user to enter a number.
    printf("Number: ");
    // lue käyttäjän syöte
    scanf("%d", &number);
    // Check if entered number is 0
    if ( number == 0 ) {
        // If yes -> print out "You entered a zero".
        printf("You entered a zero\n");
    } else {
        // If no -> print out "You entered something else".
        printf("You entered something else");
    }

    // luo kokonaislukutaulukko
    int points[5] = {17, 5, 7, 10, 555};
    printf("\nTaulukon ekat pisteet on %d", points[0]);

    // tervehdys
    char name[50];
    printf("\nName: ");
    scanf("%s", name);
    printf("\nHello %s", name);
    return 0;
}
