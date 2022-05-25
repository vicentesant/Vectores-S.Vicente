/******************************************************************************

7) El usuario ingresa datos de 5 microprocesadores.
Se cuenta con su precio (float) y su velocidad en gigahertz (float). 
Mostrar en pantalla si el microprocesador más caro es también el más rápido, o no.
*******************************************************************************/
#include <stdio.h>

int main()
{
int i, max, maxo;
	float gigahertz[5], maximo,precio[5];
	
	printf ("ingresar precio de los microprosesadores: \n");
		
	for (i=0 ; i<=4 ; i++){
		scanf ("%f",&precio[i]);
		
	}
	
	printf ("ingresar su velocidad en gigahertz \n");
	
	for (i=0 ; i<=4 ; i++){
		scanf ("%f",&gigahertz[i]);
	}
	
	
	
	
	maximo = 0;
	
	for (i=0 ; i<=4 ; i++){
		if (precio[i]>maximo){
			maximo = precio[i];
			max = i;
		}
	}
	
	
	
	maximo = 0;
	for (i=0 ; i<=4 ; i++){
		if (gigahertz[i]>maximo){
			maximo = gigahertz[i];
			maxo = i;
		}
	}
	
	if(maxo==max)
	{
	  printf("el prosesador mas caro es el mas rapido");
	}
	else
	{
	    printf("el prosesador mas caro no es el mas rapido");
	}
	
	
	
	
}