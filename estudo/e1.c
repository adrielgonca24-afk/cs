#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char textoa[100];
    printf("digite seu texto:\n");
    scanf("%99s", textoa);
    int posicaotextob = 0;
    int tamanhotextoa = strlen(textoa);
    char textob[tamanhotextoa +1];
    for (int i = tamanhotextoa -1; i >= 0; i--){
            textob [posicaotextob] = textoa[i];
            posicaotextob++;
        //printf("caracter: %c \n", textoa [i]);
    }
    textob [tamanhotextoa] = '\0';
    printf("%s \n", textoa);
    printf("%s \n", textob);
    return 0;
}
