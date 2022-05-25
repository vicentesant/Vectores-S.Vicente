/******************************************************************************
1) Permita el ingreso de 5 números enteros y guárdelos en un vector. Muestre el vector en pantalla, al derecho y al revés.

*******************************************************************************/
#include <stdio.h>
int main()
{
    
    int A[5];
    int i = 0;
    //////////////////////////
    printf("Ingrsar valores:\n");
    for(i=0; i<5; i++)
    {
    scanf("%d", &A[i]);
    }
    //////////////////////////
    printf("\n%d , %d , %d, %d, %d\n ", A[0],A[1],A[2],A[3],A[4]);
    printf("\n%d , %d , %d, %d, %d\n ", A[4],A[3],A[2],A[1],A[0]);

    return 0;
}