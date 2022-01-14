#include <stdio.h>
#include <Windows.h>
#include "Minusculas.h"

void minu() // Función para convertir un string en minúsculas.
{
    char pal[50];
    int palnum;

    printf("\n");
    printf("Escriba la palabra que quiere convertir: ");

    while(getchar() != '\n'); // Limpio el buffer.

    gets(pal);

    for (int i=0; pal[i] != 0; i++)
    {
        if (pal[i] >= 65 && pal[i] <= 90)
        {
            palnum = pal[i] + 32; //convierte de char a int y suma 32 para pasar a minúsucula.
            pal[i] = '0' + palnum-48; //convierte de int a char.
        }
    }

    printf("\n");
    printf("Palabra en minúscula: %s \n", pal);
    Sleep(3000);

}