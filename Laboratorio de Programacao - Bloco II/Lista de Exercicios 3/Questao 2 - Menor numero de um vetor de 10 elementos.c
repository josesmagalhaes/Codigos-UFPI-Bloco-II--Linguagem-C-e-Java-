/*
Faça um programa que leia um vetor de 10
valores e imprima o menor deles.
*/

#include <stdio.h>

int main () {
	int vet [10], i, maior;
	
	for (i=0;i<10;i++){
		printf ("Digite os numeros do vetor [%d]: ", i);
		scanf ("%d", &vet [i]);
	}
	maior=vet[i];
	for (i=0;i<10;i++){
		if (vet[i]>maior){
			maior=vet[i];
		}
	}
	
	printf ("O maior numero do vetor e: %d", maior);
	return 0;
}
