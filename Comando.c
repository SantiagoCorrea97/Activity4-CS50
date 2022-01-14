#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "Comando.h"

void com() // Función para ejecutar comandos en la consola.
{
    char pal[50];
    printf("\n");
    printf("Escriba el comando que quiera ejecutar: ");
    scanf("%s", pal);
    printf("\n");

    system(pal); // Ejecutar el comando.

    Sleep(3000);

}
