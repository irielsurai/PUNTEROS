#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int* , int );
void cargarVector (int* , int );


int main()
{
    //int contadoID=0;
    int vector [5];
    cargarVector (vector, 5);
    mostrarVector (vector, 5);

    printf("Hello world!\n");
    return 0;
}

void mostrarVector(int* vector, int tam)
{
    int i;
        for (i=0;i<tam; i++)
    {
        printf ("%d", *(vector +i));
    }
}

void cargarVector (int* vector, int tam)
{
    int i;
        for (i=0;i<tam; i++)
    {
        printf("Ingrese un numero:");
        scanf ("%d", vector+1 );
    }
}

// *ultimoId = *ultimoId + 1  // para incrementar Id
