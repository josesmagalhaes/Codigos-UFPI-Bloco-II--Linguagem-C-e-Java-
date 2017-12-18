/*
Dados três números, exibi-los em ordem crescente.
*/

#include<stdio.h>

int main () {
	int numero1, numero2, numero3, troca;
	printf ("Digite tres numeros inteiros: ");
	scanf ("%d %d %d", &numero1, &numero2, &numero3);

	if( numero1 > numero2 )
    {
        troca = numero2;
        numero2 = numero1; 
        numero1 = troca;
    }
    if( numero2 > numero3 )
    {
        troca = numero3; 
        numero3 = numero2;
        numero2 = troca;
    }
    if( numero1 > numero2)
    {
        troca = numero2;
        numero2 = numero1;
       	numero1 = troca;
    }

    printf ("A ordem crescente dos numeros e: %d %d %d", numero1, numero2, numero3);
    
	return 0;
}
