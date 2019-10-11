#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unEntero;
    unEntero = 10;  // hecho el puntero se puede en vez de asignar asi, asignar a traves de *puntero = 10
    int* puntero = NULL; // El null se pone como contro de seguridad para que el puntero apunte an nada mientras no se lo asigne. Luego uno le asigna algo.
    puntero = &unEntero; //le asigna al puntero la direccion de memoria del objeto
    if (puntero != NULL)
    {
        printf( " El numero por puntero es %d, \n El numero por variable es: %d \n La ubicacion por puntero es: %d,\n La ubicacion de la variable es %d \n La ubicacion del puntero es; %d \n ", *puntero, unEntero, puntero, &unEntero,&puntero );
    }
    else
    {
        printf ("apunta a nada");
    }

    return 0;
}
