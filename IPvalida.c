#include <stdio.h>
#include <Windows.h>
#include "IPvalida.h"

void ipvalida() //Función para determinar IP válido.
{
    int ip1, ip2, ip3, ip4;

    printf("\n");
    printf("Por favor digite la IP con los . entre los octetos. \n");
    printf("Ingresa la Ip que quiere comprobar si es válida: ");
    scanf("%i.%i.%i.%i", &ip1, &ip2, &ip3, &ip4); // toma la IP.
    
    if (ip1 > 255 || ip2 > 255 || ip3 > 255 || ip4 > 255 )
    {
        printf("\n");
        printf("Alguno de los octetos es mayor a 255, IP inválida.");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("IP válida.");
        printf("\n");
    }
    Sleep(5000);
}