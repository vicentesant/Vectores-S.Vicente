/******************************************************************************

8) Declare un vector de 10 enteros y carguelo con 1 y 0 alternativamente. 
Es decir, en la primer posición un 1, en la segunda un 0, en la tercera un 1, en la cuarta un 0... etc. 
Muestrelo en pantalla para verificar que quedó bien cargado.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[10];
    
    A[0]=1;
    A[1]=0;
    A[2]=1;
    A[3]=0;
    A[4]=1;
    A[5]=0;
    A[6]=1;
    A[7]=0;
    A[8]=1;
    A[9]=0;
    
 printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n ", A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9]);

    
}