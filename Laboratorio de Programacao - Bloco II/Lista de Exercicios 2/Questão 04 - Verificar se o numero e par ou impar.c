/*
4.	Faça um programa que leia um número e imprima se ele é par ou ímpar.
*/
#include<stdio.h>

int main () {
	int num;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	if ((num % 2)==0){
		printf ("O numero digitado e par!");
	}else {
		printf ("O numero digitado e impar!");
	}
		
	return 0;
}
