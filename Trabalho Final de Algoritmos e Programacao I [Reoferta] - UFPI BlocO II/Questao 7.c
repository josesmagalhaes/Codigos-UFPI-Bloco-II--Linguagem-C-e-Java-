/*
Faça um algoritmo que leia 100 valores e os escreva 
na ordem contrária à que foram digitados.
*/

#include <conio.h>
#include <stdio.h>

int main (){
	int i, n = 100;
	int vet [100];
	printf("Digite os Numeros: ");
	for ( i = 0; i < n; i++){
		scanf("%d", &vet [i] );
	}
	
	printf("Numeros Digitados: ");
	for ( i = 0; i < n; i++){
		printf(" %d ",vet [i] );
	}
	
	printf("\n");
	printf("Numeros invertidos: ");
	for ( i = n - 1; i >= 0; i--)
		printf(" %d ", vet [i]);
	printf("\n");
	
	getche();
}
