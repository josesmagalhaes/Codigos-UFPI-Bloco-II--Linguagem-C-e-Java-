/*
1.	Faça um programa que leia um nome e informe
se ele é igual ao seu dia de nascimento. Imprimir
“NÚMERO CORRETO” se for igual e imprimir “NÚMERO
INCORRETO”, caso contrário.
*/

#include <stdio.h>

int main () {
	int num;
	printf("Por favor, digite o dia do seu nascimento: ");
	scanf ("%d", &num);
	
	if (num==15){
		printf ("NUMERO CORRETO");
	}else{
		printf ("NUMERO INCORRETO");
	}
	
	return 0;	
}
