/*Fa�a um programa que contenha uma fun��o 
que receba um nome e escreva �Bom dia� para esse nome recebido.
*/

#include <stdio.h>
#include <string.h>

void nome (){
	char name[100];
	printf ("Digite um nome: ");
	gets(name);
	printf ("Bom dia %s", name);
	
}

int main (){
	nome();
	return 0;
}
