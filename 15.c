|//15) Dado un vector de 10 enteros, imprima sus valores en pantalla sin repetirlos. Es decir que si un valor
//aparece más de una vez solo hay que imprimirlo una.


#include <stdio.h>

int main(){
	
	int vec[10], comp[10], i, j;
	
	printf ("ingrese 10 valores. Los repetidos seran mostrados solo una vez.\n");
	for (i=0 ; i<10 ; i++){
		scanf ("%d",&vec[i]);
		for (j=0 ; j<i ; j++){
			if (vec[i] == vec[j]){
				vec[i] = 'a';
			}
		}
	}
	
	for (i=0 ; i<10 ; i++){
		if (vec[i] != 'a'){
			printf ("%d",vec[i]);
		}
		
	}
	
	
	return 0;
}