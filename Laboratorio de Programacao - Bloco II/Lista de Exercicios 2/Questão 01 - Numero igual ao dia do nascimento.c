/*
1.	Fa�a um programa que leia um nome e informe
se ele � igual ao seu dia de nascimento. Imprimir
�N�MERO CORRETO� se for igual e imprimir �N�MERO
INCORRETO�, caso contr�rio.
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
