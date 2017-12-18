/*
Faça um programa que contenha uma função que receba dois parâmetros
inteiros por referência e troque o valor dessas variáveis.
*/

#include <stdio.h>

void troca (int *x, int *y){
	int auxiliar;
	auxiliar = *x;
	*x=*y;
	*y=auxiliar;
}

int main (){
	int a, b;
	
	printf ("Digite o valor de A: ");
	scanf ("%d", &a);
	printf ("Digite o valor de B: ");
	scanf ("%d", &b);
	
	printf ("Os numeros foram digitados na seguinte ordem: A = %d e B = %d\n", a,b);
	troca(&a, &b);
	printf ("Os valores trocados sao: A = %d e B = %d", a,b);
	
	
	return 0;
}
