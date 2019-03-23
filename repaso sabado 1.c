#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);

int main()
{
    int elnumeroIngresado;
    elnumeroIngresado = pedirNumero();
    printf("EL NUMERO INGRESADO FUE %d",elnumeroIngresado);

}

int pedirNumero(void)
{
     int miNumero;
     printf("ingrese numero :");
     scanf("%d",&miNumero);

    while(miNumero < 0 || miNumero > 10)
    {
        printf("ingrese numero :");
        scanf("%d",&miNumero);
    }
}
