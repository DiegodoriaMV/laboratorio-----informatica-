#include <stdio.h>
#include <stdlib.h>
#include "funcionespuntero.h"

int main()
{
    int sepudo;
    float respuesta;

    int primerEdad;
    int segundaEdad;

    pedirEdad(&primerEdad);
    pedirEdad(&segundaEdad);

    sepudo = dividir(primerEdad,segundaEdad,&respuesta);
    if (sepudo == 1)
    {
        printf("la respuesta es %.2f", respuesta);
    }else
    {
        printf("no se puede");
    }


    /*
    int miEdad;
    int retorno;

    retorno=pedirEdad(&miEdad);
    if(retorno == 1)
    {
        printf("\n tu edad es %d", miEdad);
    }else
    {
        printf("no se pudo");
    }
    /*
    verSiAnda();

    int sueldo;
    printf("\n lugar sueldo :%d" ,&sueldo);
    sueldo = 10000;

    cambiarValor(sueldo);
    printf("\n por valor :%d" ,sueldo);
    cambiarReferencia(&sueldo);

    printf("\n por referencia :%d",sueldo);
*/
    return 0;
}
