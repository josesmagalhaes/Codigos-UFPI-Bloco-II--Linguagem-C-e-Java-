/*Faça um programa que contenha uma função subtração, 
que receba dois valores e retorne a subtração dos dois.
*/

#include <stdio.h>

int subtracao (){
	int a, b;
	printf ("Digite um numero: ");
	scanf ("%d", &a);
	printf ("Digite outro numero: ");
	scanf ("%d", &b);
	
	return a-b;
}



int main (){
	printf ("Resultado da subtracao: %d: ", subtracao());
	
	return 0;
}
