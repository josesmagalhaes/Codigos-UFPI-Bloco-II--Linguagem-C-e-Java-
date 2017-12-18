/*
7.	Faça um programa que calcule o fatorial de um
número qualquer (Lembrando o cálculo do fatorial:
n! = n * n-1 * n-2 * ... * 2 * 1. Por exemplo: 5!
= 5 * 4 * 3 * 2 * 1 = 120).
*/

#include <stdio.h>
int main () {
	int num,fat=1,i;
	printf ("Digite um numro inteiro: ");
	scanf ("%d", &num);
	for (i=num;i>=1;i--){
		fat=fat*i;
	}
	printf ("O fatorial de %d e: %d\n", num, fat);
	return 0;
}

