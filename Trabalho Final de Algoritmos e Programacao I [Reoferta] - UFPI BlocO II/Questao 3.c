/*
Dado um número, exibir todos os seus divisores.
*/

#include <stdio.h>

int main () {
	int num, i;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	for (i=1;i<=num;i++){
		if ((num%i)==0){
			printf ("%d\n", i);
		}
	}
	
	return 0;
}
