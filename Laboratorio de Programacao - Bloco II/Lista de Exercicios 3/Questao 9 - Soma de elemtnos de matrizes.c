/*
Faça um programa que receba os elementos de uma matriz
e imprima a soma de todos os seus elementos.
*/

#include <stdio.h>

int main () {
	int i, j, matrizA[2][2], soma;
	soma=0;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf ("Digite os numeros da matriz [%d] [%d]: ",i,j);
			scanf ("%d", &matrizA [i][j]);
			soma+=i+j;
		}
	}
	printf ("A soma dos elementos das matrizes e: %d", soma);

	return 0;
}
