/*
Faça um programa que receba duas strings
e troque os valores dessas variáveis. Imprima
os novos valores das duas strigs.
*/

#include <stdio.h>
#include <string.h>

int main () {
	char semana[10], mes[10], aux1[20], aux2[20];
	printf ("Digite um dia da semana: ");
	gets(semana);
	printf ("Digite um mes do ano: ");
	gets(mes);
	
	strcpy (aux1, semana);
	strcpy (semana, mes);
	strcpy (mes, aux1);
	
	printf ("A variavel semana passa a ser: %s e a variavel mes passa a ser: %s", semana, mes);
	
	
	
	return 0;
}
