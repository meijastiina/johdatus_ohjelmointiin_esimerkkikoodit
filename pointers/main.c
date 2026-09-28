
#include <stdio.h>

int main()
{
    int age;
    char name[50];

    printf("\nAge:");
    scanf("%d", &age);
    printf("\nName:");
    scanf("%s", name);

    printf("\nVariable age value is %d", age);
    printf("\nVariable age address is %p", &age);

    return 0;
}
