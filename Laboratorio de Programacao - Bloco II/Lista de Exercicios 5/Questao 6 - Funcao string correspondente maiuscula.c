/*
Faça um programa que contenha uma função que receba uma string e
retorne outra string com todas as letras substituídas pela correspondente maiúscula.
*/

#include <stdio.h>
#include <string.h>

void maiuscula () {
	
	char palavra[100];
	printf ("Digite uma palavra: ");
	gets(palavra);
	
	printf ("A palavra digitada em maiscula e: %s", strupr(palavra));
}

int main (){
	maiuscula();
	
	return 0;
}
