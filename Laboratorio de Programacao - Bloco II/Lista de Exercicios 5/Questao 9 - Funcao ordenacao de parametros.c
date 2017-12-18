/*
Faça um programa que contenha uma função que receba três parâmetros
por referência e os ordene, alterando para ser o primeiro parâmetro
o menor, o segundo parâmetro o intermediário e o terceiro parâmetro o maior.
*/

#include <stdio.h>

void ordenar (int *numero1, int *numero2, int *numero3){
	int troca;
	if( *numero1 > *numero2 )
    {
        troca = *numero2;
        *numero2 = *numero1; 
        *numero1 = troca;
    }
    if( *numero2 > *numero3 )
    {
        troca = *numero3; 
        *numero3 = *numero2;
        *numero2 = troca;
    }
    if( *numero1 > *numero2)
    {
        troca = *numero2;
        *numero2 = *numero1;
        *numero1 = troca;
    }
    
    printf ("A ordem crescente dos numeros e: %d %d %d", *numero1, *numero2, *numero3);
}

int main () {
	int n1, n2, n3;
	printf ("Digite tres numeros inteiros: ");
	scanf ("%d %d %d", &n1, &n2, &n3);
	ordenar(&n1, &n2, &n3);
	return 0;
}

