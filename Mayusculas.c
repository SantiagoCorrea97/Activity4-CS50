#include <stdio.h>
#include <Windows.h>
#include "Mayusculas.h"

void mayu() // Función para convertir un string en mayúsculas.
{
    char pal[50];

    int palnum;

    printf("\n");
    printf("Escriba la palabra que quiere convertir:");

    while(getchar() != '\n'); // Limpio el buffer.

    gets(pal);

    for (int i=0; pal[i] != 0; i++)
    {
         if (pal[i] >= 97 && pal[i] <= 122)
        {
            palnum = pal[i] - 32; //convierte de char a int y suma 32 para pasar a mayúsucula.
            pal[i] = '0' + palnum-48; //convierte de int a char.
        }
    }

    printf("\n");
    printf("Palabra en mayúscula: %s \n", pal);
    Sleep(3000);

}