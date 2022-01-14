#include <stdio.h>
#include <Windows.h>
#include "convertirASCII.h"

void convascii() //Función para convertir en ASCII.
{
    int num = 0;
    char ascii;

    printf("\n");
    printf("Ingrese el número que desea convertir a ASCII:");
    scanf("%i", &num); // toma el número que se va a convertir.

    ascii = '0' + num-48; // convertir el int en char

    if(num > 32 && num < 128)
    {
        printf("\n");
        printf("El ASCII de %i es %c.\n", num, ascii);
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("Lo sentimos, sólo mostramos caracteres entre el 33 y el 127 de la lista ASCII.");
        printf("\n");
    }
    Sleep(5000);
}