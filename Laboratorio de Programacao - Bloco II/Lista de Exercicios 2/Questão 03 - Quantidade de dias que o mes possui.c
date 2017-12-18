/*
3.	Faça um programa que receba um mês do ano (em formato numérico)
e imprima a quantidade de dias que ele possui (considere fevereiro
contendo 28 dias).
*/
#include<stdio.h>

int main () {
	int mes;
	printf ("Por favor, digite o mes desejado: ");
	scanf ("%d", &mes);
	
	switch (mes) {
		case 1: printf ("O mes possui 31 dias"); break;
		case 2: printf ("O mes possui 28 dias"); break;
		case 3: printf ("O mes possui 31 dias"); break;
		case 4: printf ("O mes possui 30 dias"); break;
		case 5: printf ("O mes possui 31 dias"); break;
		case 6: printf ("O mes possui 30 dias"); break;
		case 7: printf ("O mes possui 31 dias"); break;
		case 8: printf ("O mes possui 31 dias"); break;
		case 9: printf ("O mes possui 30 dias"); break;
		case 10: printf ("O mes possui 31 dias"); break;
		case 11: printf ("O mes possui 30 dias"); break;
		case 12: printf ("O mes possui 31 dias"); break;
		default: printf ("O numero informado nao corresponde a nenhum mes do ano!");			
	}
	
	
	return 0;
}
