/******************************************************************************

5b) Agregue al punto anterior un mensaje que diga si la persona más grande es también la que más gana, o no.


*******************************************************************************/
#include <stdio.h>

int main(){
	
	int edad[5], i, max,maxB;
	float sueldo[5], maximo;
	
	printf ("ingresar las edades: \n");
		
	for (i=0 ; i<=4 ; i++){
		scanf ("%d",&edad[i]);
		
	}
	
	printf ("ingresar los sueldos \n");
	
	for (i=0 ; i<=4 ; i++){
		scanf ("%f",&sueldo[i]);
	}
	printf ("las edades son: \n");
	for (i=0 ; i<=4 ; i++){
		printf ("%d ",edad[i]);
	}
	
	printf ("\n");
	printf ("y los sueldos son: \n");
	for (i=0 ; i<=4 ; i++){
		printf ("%f ",sueldo[i]);
	}
	
	printf("\n");
	
	maximo = 0;
	
	for (i=0 ; i<=4 ; i++){
		if (edad[i]>maximo){
			maximo = edad[i];
			max = i;
		}
	}
	
	printf ("la edad mas grande esta en la posicion %d \n",max);
	
	maximo = 0;
	for (i=0 ; i<=4 ; i++){
		if (sueldo[i]>maximo){
			maximo = sueldo[i];
			maxB = i;
		}
	}
	printf ("el sueldo mas grande esta en la posicion %d \n",maxB);
	
	
	if(max==maxB)
	{printf("la persona con mas edad tambien es la que mas gana");}
	else
	{printf("la persona con mas edad no es la que mas gana");}
	
	
}