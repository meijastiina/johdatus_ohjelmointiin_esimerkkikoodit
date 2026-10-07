#include <stdio.h>

int main()
{
    FILE * filepointer;
    char stringFromFile[50];

    // Open the file.
    filepointer = fopen("c:/tmp/Testi666.txt", "r");
    if (filepointer == NULL )
    {
        printf("Error in file open");
    } else {
        // Read the contents of the file into a string variable.
        fscanf(filepointer, "%s", stringFromFile);
        // Print the contents on the screen.
        printf("%s \n", stringFromFile);
        // Close the file.
        fclose(filepointer);
    }
    return 0;
}
