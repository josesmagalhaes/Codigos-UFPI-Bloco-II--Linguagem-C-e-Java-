/*Fa�a um programa que receba um n�mero inteiro
e calcule o resto da divis�o por 2.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int num, resto;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	resto= num % 2;
	
	printf ("O resto da divisao de %d por 2 e: %d\n", num, resto);
	
	system ("PAUSE");
	return 0;
}
