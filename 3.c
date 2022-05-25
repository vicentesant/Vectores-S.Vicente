/******************************************************************************
3) Permita el ingreso de 5 flotantes. Muestre el vector en pantalla.
Luego multiplique todos los valores por 1.65 y vuelva a mostrarlos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float A[5];
    int i=0;
    
    
    
    for(i=0; i<5; i++)
    {
    printf("Ingrsar valores:");
    scanf("%f", &A[i]);
    }
    
 printf("\n%f , %f , %f, %f,%f\n ", A[0],A[1],A[2],A[3],A[4]);

    for(i=0; i<5; i++)
    {
    A[i]=A[i]*1.65;
    }
    printf("\n%f , %f , %f, %f,%f\n ", A[0],A[1],A[2],A[3],A[4]);
}