#include <stdio.h>
#include <Windows.h>
#include "Sustituir.h"

void sust() // Función que permite cambiar caracter por otro en string.
{
    char pal[50];
    char pal1[2];
    char pal2[2];

    printf("\n");
    while(getchar() != '\n'); // Limpio el buffer.
    printf("Escriba la palabra que quiere editar: ");
    gets(pal);
    while(getchar() != '\n'); // Limpio el buffer.
    printf("Escriba la letra dentro de la palabra que quiere remplazar: ");
    scanf("%s", pal1);
    while(getchar() != '\n'); // Limpio el buffer.
    printf("Escriba la letra o caracter que quiere poner: ");
    scanf("%s", pal2);

    for(int i = 0; pal[i] != 0; i++)
    {
        if (pal[i] == pal1[0])
        {
            pal[i] = pal2[0]; //Intercambiar la letra por el caracter nuevo.
        }
    }

    printf("\n");
    printf("Palabra editada: %s \n", pal);
    Sleep(3000);
}