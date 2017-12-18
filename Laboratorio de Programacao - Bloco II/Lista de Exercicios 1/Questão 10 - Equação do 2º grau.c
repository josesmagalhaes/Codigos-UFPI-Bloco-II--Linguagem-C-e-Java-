/*Faça um programa que resolva uma equação do primeiro
grau (ax + b = 0). Deve-se pedir para o usuário digitar
os coeficientes a e b e, após, calcular x, que é igual a -b/a.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	float a, b, x, result;
	printf ("Digite um valor para A: ");
	scanf ("%f", &a);
	printf ("Digite um valor para B: ");
	scanf ("%f", &b);
		
	x=(a-b)/a;
	result = (a*x)+b;
	
	printf ("O resultado da equaçao e: %.2f\n", result);	
	
	system ("PAUSE");
	return 0;
}
