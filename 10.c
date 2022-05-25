/******************************************************************************

10) Se cuenta con dos vectores de 8 enteros cada uno. Estos vectores tienen DNIs de jugadores de tenis.
Se pide ingresar los datos y mostrar en pantalla las parejas, armadas así:
el primero de un vector con el último del otro, el segundo con el anteúltimo, etc.

*******************************************************************************/
#include <stdio.h>

int main()
{
int dniA[8];
int dniB[8];
int x;
int i;

printf ("ingresar dni de los jugadores del lado A: \n");
		
	for (i=0 ; i<=7 ; i++){
		scanf ("%d",&dniA[i]);
		
	}
	
	printf ("ingresar dni de los jugadores del lado B: \n");
	
	for (i=0 ; i<=7 ; i++){
		scanf ("%d",&dniB[i]);
	}
	
	for(i=0 ; i<=7 ; i++)
	{
	x=7-i;
	printf("pareja %d:\n%d, %d\n",i,dniA[i],dniB[x]);
	}
}