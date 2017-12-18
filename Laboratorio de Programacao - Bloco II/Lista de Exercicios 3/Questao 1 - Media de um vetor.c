/*
1.	Faça um programa que leia 10 valores reais em um vetor
e, logo após, calcule a média desses valores e a imprima para o usuário.
*/

#include <stdio.h>

int main () {
	int i;
	float media,soma, vet[10];
	
	for (i=0;i<10;i++){
		printf ("Digite os numeros do vetor [%d]: ", i);
		scanf ("%f", &vet [i]);
	}
	soma=0;
	for (i=0;i<10;i++){
		soma+= vet [i];
	}
	media=soma/3;
	
	printf ("A media dos numeros contidos no vetor e: %.2f\n", media);
	return 0;
}
