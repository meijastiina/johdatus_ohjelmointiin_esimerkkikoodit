#include <stdio.h>
#include <string.h>

// Create a simple struct for a phonebook contact.
typedef struct Contact {
    // Include at least members suggested in the slide 3.
    // You can also add more members.
    int speedDial;
    char name[50];
    char phoneNumber[10];
    char organisation[20];
} contact;

int main()
{
    contact phoneBook[10];
    // Create two struct variables.
    struct Contact contact1;
    contact contact2;

    // Aseta oletusarvot
    for ( int i = 0; i < 10; i++)
    {
        strcpy(phoneBook[i].name, "");
        strcpy(phoneBook[i].phoneNumber, "");
        strcpy(phoneBook[i].organisation, "");
        phoneBook[i].speedDial = 99;
    }

    // aseta arvot contact1:lle
    phoneBook[0].speedDial = 1;
    strcpy(phoneBook[0].name, "John");
    strcpy(phoneBook[0].phoneNumber, "132456789");
    strcpy(phoneBook[0].organisation, "Oamk");

    // aseta arvot contact2:lle
    phoneBook[1].speedDial = 2;
    strcpy(phoneBook[1].name, "Jane");
    strcpy(phoneBook[1].phoneNumber, "789456132");
    strcpy(phoneBook[1].organisation, "Nokia");

    // aseta arvot contact3:lle
    phoneBook[2].speedDial = 3;
    strcpy(phoneBook[2].name, "Joe");
    strcpy(phoneBook[2].phoneNumber, "8888888");
    strcpy(phoneBook[2].organisation, "Kesko");

    for ( int i = 0; i < 10; i++)
    {
        printf("\n---- Contact %d -------", i);
        printf("\n%s", phoneBook[i].name);
        printf("\n%s", phoneBook[i].phoneNumber);
        printf("\n%s", phoneBook[i].organisation);
    }
    // printf("\n---- Contact 2 -------");
    // printf("\n%s", contact2.name);
    // printf("\n%s", contact2.phoneNumber);
    // printf("\n%s", contact2.organisation);
    return 0;
}
