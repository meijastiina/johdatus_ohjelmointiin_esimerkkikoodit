#include <stdio.h>

int main()
{
    // Luo muuttujat
    char name[50]; // merkkijono muuttuja johon mahtuu 50 merkkiä
    int counter = 0; // laskuri silmukkaa varten
    // Pyydä käyttäjältä nimi
    printf("Name: ");
    // Lue käyttäjän syöte
    scanf("%s", &name);

    //  WHILE
    // Toista viisi kertaa
    while ( counter < 5 )
    {
        // Tulosta nimi
        printf("\n%s", name);
        // Kasvata laskuria
        counter++;
    }

    //  DO WHILE
    // Nollaa laskuri
    counter = 0;
    // Toista viisi kertaa
    do {
        // Tulosta nimi
        printf("\n%s", name);
        // Kasvata laskuria
        counter++;
    }while( counter < 5 );

    // Tulosta luvut 0-10
    for ( int i = 0; i <= 10; i++ )
    {
        printf("\n%d", i);
    }
    // Tulosta luvut 10-0
    for ( int i = 10; i >= 0; i-- )
    {
        printf("\n%d", i);
    }
    // T 5
    for ( int i = 0; i < 10; i++ )
    {
        for ( int j = 0; j < 10; j++ )
        {
            printf("(%d.%d)", i, j);
        }
        printf("\n");
    }
    // Päätä ohjelman suoritus
    return 0;
}
