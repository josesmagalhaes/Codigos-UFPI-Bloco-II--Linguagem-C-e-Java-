/*Fa�a um programa que resolva uma equa��o do primeiro
grau (ax + b = 0). Deve-se pedir para o usu�rio digitar
os coeficientes a e b e, ap�s, calcular x, que � igual a -b/a.*/

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
	
	printf ("O resultado da equa�ao e: %.2f\n", result);	
	
	system ("PAUSE");
	return 0;
}
