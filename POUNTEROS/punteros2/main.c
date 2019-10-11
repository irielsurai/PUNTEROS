#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* puntero = NULL;
    int unEntero;
    puntero = &unEntero;
    printf("%d\n", puntero );
    printf("%p\n", puntero+0 );
    printf("%p\n", puntero+1 );
    printf("%p\n", puntero+2 ); //se va moviendo de a 4 bits porque es lo que ocupa un int en la memoria (y unEntero es un int)

    printf ("\t %d \n", sizeof(char*));  //La funcion sizeof te dice cuanto pesa cada tipo de variable

    int* puntero2;
    int vector[5] = {5, 7, 9, 8, 3};

    // Tres maneras de asignar un vector a un puntero
    // puntero2 = &vector; // funciona ¿por que? pero es redundante
    puntero2 = vector; //mejor opcion  LOS VECTORES SON PUNTEROS
    // puntero2 = &vector [0]; //direcion de memoria de la primera ubicacion del vector

    int i;
    for (i=0;i<5; i++)
    {

        printf("%d\n", *(puntero2+i)); ///si no pongo parentesis le suma i al resultado del valor del primero elemento
    }


    printf("Hello world!\n");
    return 0;
}
