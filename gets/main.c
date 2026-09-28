#include <stdio.h>

int main()
{
    char fullname[50];
    char name2[50];

    printf("Full Name: ");
    fgets(fullname, sizeof(fullname), stdin);
    printf("\nName: %s", fullname);
    printf("Name: ");
    scanf_s("%s", name2, sizeof(name2));
    printf("\nName: %s", name2);

    return 0;
}
