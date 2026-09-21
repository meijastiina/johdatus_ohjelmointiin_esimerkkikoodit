
#include <stdio.h>

// Funktion prototyyppi
void printHello();
void printSum( int number1, int number2 );
int sum( int number1, int number2 );

int main()
{
    // Funktion kutsu
    printHello();
    printSum(5, 8);
    int calculatedSum = sum(10, 100);
    printf("\nCalculated sum is %d", calculatedSum);
    printf("\nCalculated sum is %d", sum(14, 6));
    return 0;
}

// Funktion toteutus
void printHello()
{
    printf("\nHello!");
}

void printSum( int number1, int number2 )
{
    printf("\nSum is %d", number1 + number2);
}

int sum( int number1, int number2 )
{
    return number1 + number2;
}
