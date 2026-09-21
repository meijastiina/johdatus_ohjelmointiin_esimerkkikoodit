#include <stdio.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("C:/tmp/testi.txt","w");
    fclose(filepointer);

    return 0;
}
