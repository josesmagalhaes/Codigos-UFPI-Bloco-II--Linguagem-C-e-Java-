/*
Faça um programa que contenha uma função que receba três valores e retorne o menor entre eles.
*/

#include <stdio.h>

void menorNumero (){
	int menor, num, i;
	printf ("Digite tres numeros inteiros: ");
	scanf ("%d", &num);
	menor=num;
	for (i=1;i<3;i++){
		printf ("Digite tres numeros inteiros: ");
		scanf ("%d", &num);
		if (num<menor){
			menor=num;
		}		
	}
	printf ("O menor dos numeros e: %d", menor);
}

int main (){
	menorNumero();
	return 0;
}
