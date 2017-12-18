/*
Faça um programa que contenha uma função que receba um número 
e verifique se ele é primo ou não.
*/

#include <stdio.h>

void primo (){
	int num, i, div;
	div=0;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);

	for (i=1;i<=num;i++){
		if (num%i==0){
			div++;
		}
	}
	if (div==2){
		printf ("O numero %d e primo!", num);
	}else {
		printf ("O numero %d nao e primo!", num);
	}

}

int main () {
	primo();	
	return 0;
}
