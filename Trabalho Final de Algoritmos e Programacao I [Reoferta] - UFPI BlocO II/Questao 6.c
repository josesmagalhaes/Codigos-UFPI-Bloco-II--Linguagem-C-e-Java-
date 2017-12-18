/*
Escreva um programa que leia um número inteiro. Se o número lido for positivo,
escreva uma mensagem indicando se ele é par ou ímpar. Se o número for negativo,
escreva a seguinte mensagem “Este número não é positivo”.
*/


#include <stdio.h>

int main () {
	int num;
	printf("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	if (num>0){
		if ((num % 2)==0){
			printf ("Este numero e par!");
		}else {
			printf ("Este numero e impar!");
		}
	}else {
		printf ("Este numero nao e positivo!");
	}
	
	return 0;
}
