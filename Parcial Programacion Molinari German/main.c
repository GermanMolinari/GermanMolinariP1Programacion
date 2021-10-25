#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*. Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto
y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *

Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer par�metro,
un car�cter como segundo y otro car�cter como tercero, la misma deber� reemplazar cada ocurrencia del segundo par�metro
por el tercero y devolver la cantidad de veces que se reemplazo ese car�cter en la cadena *

Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha estructura por tipo.
Ante igualdad de tipo deber� ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main. *
*/

typedef struct
{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
}eVacuna;

int aplicarAumento(int precio);
int reemplazarCaracteres (char cadena[], char primerCaracter, char segundoCaracter);
void ordenarPorTipo (eVacuna lista[], int tam );

int main()
{

    int primerFuncion = 100;
    char cadena[50]= "Roberto";
    eVacuna prueba[2];


    printf("%d \n", aplicarAumento(primerFuncion));
    printf("%d",reemplazarCaracteres(cadena, 'o','a'));


    return 0;
}

int aplicarAumento(int precio)
{
    int resultado;

    resultado = precio + (precio * 0.05);

    return resultado;
}

int reemplazarCaracteres (char cadena[], char primerCaracter, char segundoCaracter)
{

    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i] == primerCaracter)
        {
            cadena[i]=segundoCaracter;

            contador++;
        }
        i++;
    }

    return contador;
}

void ordenarPorTipo (eVacuna lista[], int tam)
{
    char aux;

    for (int i = 0; i<tam -1; i++)
    {
        for (int j = i + 1; j<tam; j++)
        {
            if(lista[i].tipo < lista[j].tipo)
            {
                aux =lista[i].tipo;
                lista[i].tipo = lista[j].tipo;
                lista[j].tipo=aux;
            }
        }

    }
}

