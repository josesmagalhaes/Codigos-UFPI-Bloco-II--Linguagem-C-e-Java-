/*
Fa�a um programa que receba seu nome e sobrenome
em vari�veis separadas e imprima seu nome completo
numa s� linha.
*/

#include <stdio.h>

int main () {
	char nome[10], nomeDomeio [20], sobrenome[20];
	printf ("Digite seu primeiro nome: ");
	scanf ("%s", &nome);
	printf ("Digite seu nome do meio: ");
	scanf ("%s", &nomeDomeio);	
	printf ("Digite seu sobrenome: ");
	scanf ("%s", &sobrenome);	
	
	printf ("Seu nome completo e: %s %s %s ", nome, nomeDomeio, sobrenome);
	
	return 0;
}
