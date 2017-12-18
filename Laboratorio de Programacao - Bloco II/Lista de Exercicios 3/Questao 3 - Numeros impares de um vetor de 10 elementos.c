/*
Faça um programa que leia 10 valores em um vetor.
Depois de ler o vetor, o programa deve percorrê-lo
e imprimir apenas os valores ímpares que foram armazenados.
*/

#include <stdio.h>

int main () {
	int vet [10], i;
	
	for (i=0;i<10;i++){
		printf ("Digite os numeros do vetor [%d]: ", i);
		scanf ("%d", &vet [i]);
	}
	
	for (i=0;i<10;i++){
		if ((vet[i]%2)!=0){
			printf ("%d\n", vet[i]);
		}
	}
	
	return 0;
}
