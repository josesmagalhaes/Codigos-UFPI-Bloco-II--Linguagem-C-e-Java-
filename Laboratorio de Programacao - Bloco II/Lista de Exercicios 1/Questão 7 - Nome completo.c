/*Faça um programa que receba o nome e o 
sobrenome de uma pessoa e imprima o nome 
completo em uma linha.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	char nome [10], sobrenome [50];
	printf ("Digite seu primeiro nome: ");
	gets (nome);
	printf ("Digite seu sobrenome: ");
	gets (sobrenome);
	
	printf ("Seu nome completo e: %s %s\n", nome, sobrenome);
	
	system ("PAUSE");
	return 0;
}
