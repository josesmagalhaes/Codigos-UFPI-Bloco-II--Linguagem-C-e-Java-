/*
Faça um programa que receba duas palavras,
concatene as duas e conte quantos caracteres
possui o resultado dessa junção. Imprima a palavra
concatenada e a quantidade de caracteres da concatenação.
*/

#include <stdio.h>
#include <string.h>

int main () {
	char palavra1[10], palavra2[10];
	int quantidade;
	
	printf ("Digite a primeira palavra: ");
	gets(palavra1);
	printf ("Digite a segunda palavra: ");
	gets(palavra2);
	
	strcat (palavra1, palavra2);
	quantidade = strlen(palavra1);	
	
	printf ("A nova palavra e: %s\n", palavra1);
	printf ("A nova palavra possui %d caracteres.", quantidade);
	

	
	return 0;
}
