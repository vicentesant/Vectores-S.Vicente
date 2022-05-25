/******************************************************************************


14) Dado un vector de 8 floats, imprima en pantalla si todos sus elementos son idénticos, o no.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vector[8];
    int i = 0;
    int contador = 0;
    
    for(i=0; i<8; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &vector[i]);
    }
    
    for(i=0; i<8; i++)
    {
        if(vector[i] == vector[i+1])
        {
            contador++;
        }
    }
    if(contador == 7
    )
    {
        printf("Sus elementos son identicos");
    }
    else
    {
        printf("Sus elementos no son identicos");
    }
    return 0;
} 