#include <stdio.h>
#include <stdlib.h>

int pedirOpcionesMenu(char texto[]);
float operaciones(float numero);

int main()
{

    int opcion;
    int numeroUno;
    int numeroDOS;
    char seguir = 's';
    do
    {
        opcion = pedirOpcionesMenu("1. Ingresar 1er operando (A=x) \n 2. Ingresar 2do operando (B=y) \n 3. Calcular todas las operaciones: \n 4. Informar resultados: \n 5. Salir: \n Elija una opcion: \n");

       switch(opcion)
        {
            case 1:
                printf("Ingresar el 1er operado: \n");
                //scanf("%d",&numeroUno);
            break;
            case 2:
                printf("Ingresar el 2do operado \n");
                //scanf("%d",&numeroDos);
            break;
            case 3:
                printf("calculaste las operaciones+ \n");

            /*  a) Calcular la suma (A+B)
                b) Calcular la resta (A-B)
                c) Calcular la division (A/B)
                d) Calcular la multiplicacion (A*B)
                e) Calcular el factorial (A!) "sacar el factorial solo si es un numero natural"
            */
            break;
            case 4:
                printf("informaste resultados \n");
            break;
            case 5:
                seguir = 'n';
            break;
            default:
                printf("opcion icorrecta \n");
                break;
        }


    system("pause");
    system("cls");

    }while(seguir == 's');



    return 0;
}

int pedirOpcionesMenu(char texto[])
{
    int opcion;
    printf("%s", texto);

    scanf("%d", &opcion);

    return opcion;
}
/* operaciones(float numero)
{
    float
}
*/
