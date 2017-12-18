/*Faça um programa que receba sua idade 
e escreva sua idade daqui a 10 anos*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int idade;
	printf ("Digite sua idade atual: ");
	scanf ("%d", &idade);
	
	printf ("Sua idade daqui a 10 anos sera de %d anos\n", idade+10);
	
	system ("PAUSE");
	return 0;
}
