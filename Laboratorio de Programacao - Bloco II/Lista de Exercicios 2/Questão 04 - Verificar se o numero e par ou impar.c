/*
4.	Fa�a um programa que leia um n�mero e imprima se ele � par ou �mpar.
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
