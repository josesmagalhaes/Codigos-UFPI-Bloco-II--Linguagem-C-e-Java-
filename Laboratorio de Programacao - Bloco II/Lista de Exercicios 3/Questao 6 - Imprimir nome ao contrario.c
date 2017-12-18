/*
Faça um programa que receba um nome e o imprima ao contrário
*/

#include <stdio.h>
#include <string.h>

int main() {
	int x,y,tam;
	char nome[30];
	printf("Digite o nome: ");
	gets(nome);
	tam = strlen(nome);
	printf("\n O seu nome ao contrario e: ");
	for (x=tam-1; x >= 0; x--){
		printf("%c",nome[x]);
	}

	return 0;
}
