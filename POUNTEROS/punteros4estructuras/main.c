#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    float b;
    char c;
}eDato;

/*
//VERSION 5 TOMA DE DATOS CON FUNCION

void mostrarDatos (eDato*, int);
void cargarDatos (eDato*, int);


int main()
{
    eDato unDato[2];
    eDato* pDato;
    pDato = unDato; //cuando pasamos la direccion de un vector no necesitamos el & porque ya son direcciones de ubicacion

    cargarDatos (pDato, 2);
    mostrarDatos(unDato, 2);

    printf("\n\tHello world!\n");
    return 0;
}


void cargarDatos (eDato* listaDatos, int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("Ingrese un numero:");
        scanf ("%d", &(listaDatos+i)->a);
        printf("Ingrese un flotante:");
        scanf ("%f", &(listaDatos+i)->b);
        printf("Ingrese una letra:");
        fflush(stdin);
        (listaDatos+i)->c = getche();
    }
}

void mostrarDatos (eDato* listaDatos, int tam)
{
        printf ("\n \t%d \t%f \t%c\n \t%d \t%f \t%c\n", (listaDatos+0)->a,
                                                        (listaDatos+0)->b,
                                                        (listaDatos+0)->c,
                                                        (listaDatos+1)->a,
                                                        (listaDatos+1)->b,           //ESCRITO DESTA MANERA
                                                        (listaDatos+1)->c);

}
*/

/**
//VERSION 4 TOMA DE DATOS
int main()
{
    eDato unDato[2];
    eDato* pDato;
    pDato = unDato; //cuando pasamos la direccion de un vector no necesitamos el & porque ya son direcciones de ubicacion
    int i;
    for (i=0; i<2; i++)
    {
        printf("Ingrese un numero:");
        scanf ("%d", &(pDato+i)->a);
        printf("Ingrese un flotante:");
        scanf ("%f", &(pDato+i)->b);
        printf("Ingrese una letra:");
        fflush(stdin);
        (pDato+i)->c = getche();
        //scanf ("%c", &(pDato+i)->c);  //(pDato+i)->c = getche();
    }

    printf ("\n \t%d \t%f \t%c\n \t%d \t%f \t%c\n",     (pDato+0)->a,
                                                        (pDato+0)->b,
                                                        (pDato+0)->c,
                                                        (pDato+1)->a,
                                                        (pDato+1)->b,           //ESCRITO DESTA MANERA
                                                        (pDato+1)->c);

}
*/

/*

//VERSION 3
int main()
{
    eDato unDato = {1, 5.3, 'B'};
    printf ("\n \t%d \t%f \t%c\n", unDato.a,unDato.b, unDato.c);
    eDato* pDato;
    pDato = &unDato;
    printf ("\n \t%d \t%f \t%c\n", pDato->a,pDato->b, pDato->c); //Para acceder a los atributos de un objeto.

}
*/
/**

// VERSION 2
 int main()
{
    eDato unDato[2] = {{2, 3.26, 'C'},{1, 5.3, 'B'}};
    //printf ("\n \t%d \t%f \t%c\n", unDato.a,unDato.b, unDato.c);
    eDato* pDato;
    pDato = unDato; //cuando pasamos la direccion de un vector no necesitamos el & porque ya son direcciones de ubicacion
    printf ("\n \t%d \t%f \t%c\n \t%d \t%f \t%c\n",     (*(pDato+0)).a,
                                                        (*(pDato+0)).b,
                                                        (*(pDato+0)).c,
                                                        (*(pDato+1)).a,
                                                        (*(pDato+1)).b,
                                                        (*(pDato+1)).c);

}
*/

/*
//VERSION 1
int main()
{

    eDato unDato = {1, 5.3, 'B'};
    printf ("\n \t%d \t%f \t%c\n", unDato.a,unDato.b, unDato.c); //Llamada por aray de esctructuras
    eDato* pDato;
    pDato = &unDato;
    printf ("\n \t%d \t%f \t%c\n", (*pDato).a,(*pDato).b, (*pDato).c); //Llamada por puntero
}
*/

