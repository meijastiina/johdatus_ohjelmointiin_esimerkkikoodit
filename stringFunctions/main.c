#include <stdio.h>
#include <string.h>
int main()
{
    int number1 = 5, number2;
    char name[50] = "John";
    char name2[50];
    number2 = number1;
    number1 = 7;
    printf("\nNumber1 = %d", number1);
    printf("\nNumber2 = %d", number2);
    strcpy(name2, name);
    printf("\nName = %s", name);
    printf("\nName2 = %s", name2);
    if ( number1 == number2 )
    {
        printf("\nLuvut ovat samat");
    } else {
        printf("\nLuvut EIVÄT ole samat");
    }
    if ( strcmp(name, name2) == 0 )
    {
        printf("\nNimet ovat samat");
    } else {
        printf("\nNimet EIVÄT ole samat");
    }
    return 0;
}
