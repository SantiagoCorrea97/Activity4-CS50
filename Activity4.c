#include <stdio.h>
#include <Windows.h>
#include "IPvalida.h"
#include "convertirASCII.h"
#include "DADOaleatorio.h"
#include "Concatenar.h"
#include "Minusculas.h"
#include "Mayusculas.h"
#include "Intercalar.h"
#include "Sustituir.h"
#include "Comando.h"



void PriMenu();

int main(void)
{

int opc = 0; // variable para seleccionar en menú.

while(opc!=10)
 {
     
     PriMenu();
     scanf("%i", &opc); // preguntar por opción.
     
     switch (opc)
     {
        case 1:
            ipvalida();
            break;
        case 2:
            convascii(); 
            break;
        case 3:
            dadoale();
            break; 
        case 4:
            concatenar(); 
            break;
        case 5:
            minu();
            break;
        case 6:
            mayu();
            break;
        case 7:
            inter(); 
            break;
        case 8:
            sust();
            break; 
        case 9:
            com(); 
            break;
        case 10:
            break;
         default:
            printf("\n");
            printf("Lo siento, opción inválida. \n");
            printf("\n");
            break;
     }
 }


}

void PriMenu() //Función para imprimir el menú.
{
    printf("\n");
    printf("Bienvenido al Menú \n");
    printf("\n");
    Sleep(1000);
    printf("Por favor seleccione una tarea.\n");
    printf("1. Determinar si un valor ingresado por comando es una IP valida.\n");
    printf("2. Convertir un numero en ASCII.\n");
    printf("3. Generar un numero aleatorios entre 1 y 6.\n");
    printf("4. Concatenar dos palabras ingresadas.\n");
    printf("5. Convertir un string a minúscula.\n");
    printf("6. Convertir un string a mayúsucula.\n");
    printf("7. Letras intercaladas en mayúscula y minúsucula.\n");
    printf("8. Remplazar letra en string.\n");
    printf("9. Ejecutar comando en consola.\n");
    printf("10. Salir del Menú.\n");
    printf("\n");
    printf("Ingrese el número de la tarea que quiere ejecutar: ");
}
