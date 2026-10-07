#include <stdio.h>

int main()
{
    // Luo muuttujat
    FILE *filepointer;
    char ch;

    // Avaa tiedosto
    filepointer=fopen("C:/tmp/source.txt","r");
    // Lue tiedostoa merkki kerrallaan
    while((ch = fgetc(filepointer)) != EOF)
    {
        // JOS luettu merkki on , -> kirjoita ;
        if ( ch == ',')
        {
            printf("%c", ';');
        } else {
            // MUUTEN kirjoita luettu merkki
            printf("%c", ch);
        }
    }
    // Sulje tiedosto
    fclose(filepointer);

    return 0;
}
