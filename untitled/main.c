#include <stdio.h>



int main()
{

    char vastaus;
    printf("play tik tak toe? y/n\n");
    scanf("%c", &vastaus);

    if(vastaus == 'y'){
        printf("lets play!");
    }else if(vastaus == 'n'){
        printf("***** u");
        return 0;
    }else{
        printf("what");
        return 0;
    }

    char point1;

    char taulukko[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    printf("[%s]", taulukko);

}
