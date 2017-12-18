/*
6.	Faça um programa que receba as idades dos 30 alunos de uma turma e, 
ao final, calcule e escreva a média das idades desses alunos.
*/

#include<stdio.h>

int main () {
	int idade, i, soma;
	float media;
	soma=0;
	i=1;
	while (i<=30){
		printf ("Digite uma idade: ");
		scanf ("%d", &idade);
		soma+=idade;
		media= soma/30;
		i++;
	}
	
	printf ("A media das idades e: %.2f", media);
	
	return 0;
}
