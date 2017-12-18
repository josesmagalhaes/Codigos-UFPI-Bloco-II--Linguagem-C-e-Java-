/*
Entrar com dez números, exibir a metade e a raiz cúbica de cada número.
*/

#include <stdio.h>
#include <math.h>

int main () {
	float numeros[10];
	int i;

	for (i=0;i<10;i++){
		printf ("Digite um numero: ");
		scanf ("%f", &numeros[i]);
	}
	printf ("A metade dos numeros digitados sao respectivamente: \n");
	for (i=0;i<10;i++){
		printf ("%.1f ", numeros[i]/2);
	}
	printf ("\n");
	
	printf ("A raiz cubica dos numeros digitados sao respectivamente: \n");
	for (i=0;i<10;i++){
		printf ("%.2f ", cbrt(numeros[i]));
	}	
	
	return 0;
}
