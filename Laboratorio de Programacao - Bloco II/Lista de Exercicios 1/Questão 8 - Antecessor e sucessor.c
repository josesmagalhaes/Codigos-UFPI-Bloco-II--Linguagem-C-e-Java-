/*Faça um programa que receba um número
e exiba seu sucessor e antecessor.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int num;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	printf ("O sucessor de %d e: %d\n", num, num+1);
	printf ("O antecessor de %d e: %d\n", num, num-1);
	
	system ("PAUSE");
	return 0;
}
