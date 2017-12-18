/*
Faça um programa que contenha uma função que receba uma 
string e retorne quantas consoantes existem na string recebida.
*/

#include <stdio.h>
#include <string.h>

void consoante (){
	char nome[50];
	int i, tamanho, j, consoante;
	i=0;
	j=0;
	tamanho=0;
	consoante=0;	
	
	printf ("Digite uma palavra qualquer: ");
	gets(nome);
	tamanho=strlen(nome);
	for (i=0;i<=tamanho;i++){
		if(nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' || nome[i] == 'u' || nome[i] == 'U'){
		j++;
		}
	}
	consoante=tamanho-j;
	printf ("A palavra conem %d consoantes.", consoante);
}

int main(){
	consoante();
	return 0;
}
