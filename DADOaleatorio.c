#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "DADOaleatorio.h"



void dadoale() //Función para número aleatorio.
{
    time_t random; // puntero para guardar la dirección de time(NULL).
    random = time(NULL); //tiempo calendario desde 1970 en segundos.
    srand(random); // Inicializar la generación de números aleatorios. 

    int numr = 0;
    numr = rand() % 6 + 1; //genera el número aleatorio
    printf("\n");
    printf("Tu número de la suerte es: %i", numr);
    printf("\n");

    Sleep(5000);
}