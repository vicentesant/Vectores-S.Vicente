/******************************************************************************
4) Permita el ingreso de 10 enteros positivos.
Recorra el vector y todo número par que encuentre reemplaceló por cero.Muestre en pantalla el resultado.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[10];
    int i=0;
    
    
    
    for(i=0; i<10; i++)
    {
    printf("Ingrsar valores:");
    scanf("%d", &A[i]);
    }
    

    for(i=0; i<10; i++)
    {
    if(A[i]% 2 == 0)
    {
    A[i]=0;
    }
    }
    printf("\n%d , %d , %d, %d,%d,%d , %d , %d, %d,%d\n ", A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9]);
}