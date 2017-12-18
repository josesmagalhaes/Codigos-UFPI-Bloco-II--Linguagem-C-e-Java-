/*
Faça um programa que leia um vetor de 10 elementos. Logo em seguida
leia um valor a ser encontrado nesse vetor. Pesquise o valor no vetor
e retorne a posição onde o valor está localizado. Se não for encontrado
escreva a mensagem: valor não encontrado.

Vetor: [10, 8, 4, 2, 7, 12, 19, 21, 37, 18]
Valor a ser procurado: 18
Resultado: Encontrado na posição: 9
*/

#include <stdio.h>

int main () {
	int vet [10], i, numero;
	
	for (i=0;i<10;i++){
		printf ("Digite os numeros do vetor [%d]: ", i);
		scanf ("%d", &vet [i]);
	}	
	
	printf ("Digite o valor a ser procurado: ");
	scanf ("%d",&numero);
	

	for (i=0;i<10;i++){
		if (vet[i]== numero){
			printf ("Encontrado na posicao: [%d]\n", i);
			break;
		}else if (vet[i]==!numero){
			printf ("Valor nao encontrado!");
			break;
		}
	}
	
	return 0;
}
