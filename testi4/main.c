#include <stdio.h>
#include <string.h>
void printLocalAddress();
void printPassedAddress(char* additionalInfo);

int main()
{
    printLocalAddress();

    char additionalInfo[50];
    printf("\nAdditional info: ");
    scanf("%s", additionalInfo);
    printPassedAddress(additionalInfo);

    return 0;
}

void printLocalAddress()
{
    char additionalInfo[50];
    int lastCharIndex = strlen(additionalInfo) - 2;
    printf("\nAdditional info: ");
    scanf("%s", additionalInfo);
    printf("\nAdditional info 1st char value is %c and last char value is %c %d", additionalInfo[0], additionalInfo[lastCharIndex], lastCharIndex);
    printf("\nAdditional info 1st char address is %p", &additionalInfo[0]);
}
void printPassedAddress(char* additionalInfo)
{
    char lastChar;
    printf("\nAdditional info 1st char value is %c", *additionalInfo);
    printf("\nAdditional info 1st char address is %p", additionalInfo);
    while (*additionalInfo != '\0')
    {
        additionalInfo++;
    }
    additionalInfo--;
    printf("\nAdditional info last char value is %c", *additionalInfo);
    printf("\nAdditional info last char address is %p", additionalInfo);
}
