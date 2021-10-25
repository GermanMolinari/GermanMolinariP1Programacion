#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto
y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *

Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer parámetro,
un carácter como segundo y otro carácter como tercero, la misma deberá reemplazar cada ocurrencia del segundo parámetro
por el tercero y devolver la cantidad de veces que se reemplazo ese carácter en la cadena *

Dada la siguiente estructura generar una función que permita ordenar un array de dicha estructura por tipo.
Ante igualdad de tipo deberá ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main. *
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

