#include <stdio.h>
#include <Windows.h>
#include "Concatenar.h"

void concatenar() //Función para concatenar palabras.
{
    char pal1[50]; //Declarar los string como arrays de char.
    char pal2[50];

    printf("\n");
    printf("Primera palabra: ");
    scanf("%s", pal1); // Tomamos la palabra 1.
    printf("Segunda palabra: ");
    scanf("%s", pal2); // Tomamos la palabra 1.

    printf("\n");
    printf("Palabras concatenadas: %s%s", pal1, pal2); // Imprimimos las palabras seguidas.
    printf("\n");

    Sleep(5000);

}