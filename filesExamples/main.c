#include <stdio.h>
/*
 * Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet
 *
 *
 *
 */
int main()
{
    // Luo tiedosto-osoitin
    FILE *filepointer;
    // Luo muuttuja luettavaa kokonaislukua varten
    int numberFromFile;
    // Luo muuttuja luettavaa merkkijonoa varten
    char stringFromFile[10];
    // Open the file.
    filepointer = fopen("c:/tmp/Testi666.txt", "r");
    // Read the contents of the file into a string variable.
    fscanf(filepointer, "%d %s", &numberFromFile, stringFromFile);
    // Print the contents on the screen.
    printf("%d %s \n", numberFromFile, stringFromFile);
    // Close the file.
    fclose(filepointer);

    // Avaa tiedosto
    filepointer = fopen("c:/tmp/Testi666.txt", "a");
    // Kirjoita tiedostoon
    fprintf(filepointer, "This is another test");
    // Sulje tiedosto
    fclose(filepointer);

    return 0;
}
