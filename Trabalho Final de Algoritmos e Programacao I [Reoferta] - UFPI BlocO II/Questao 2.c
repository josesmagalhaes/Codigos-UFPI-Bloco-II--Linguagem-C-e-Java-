/*
Dado um número, informar se ele é ou não é divisível por 5.
*/

#include <stdio.h>


int main () {
	int num;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	if ((num % 5)==0){
		printf ("Este numero e divisivel por 5!");
	}else{
		printf ("Este numero nao e divisivel por 5!");
	}
	
	return 0;
}
