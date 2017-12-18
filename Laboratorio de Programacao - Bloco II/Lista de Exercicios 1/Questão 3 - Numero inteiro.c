/*3.	Faça um programa que leia um número nome e escreva
a mensagem “O número digitado foi” seguido do número recebido: 
Ex: entrada: 10; saída: O número digitado foi 10.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int num;
	printf ("Digite um numero inteirio: ");
	scanf ("%d", &num);
	
	printf ("O numero digitado foi %d\n", num);
	
	system ("PAUSE");
	return 0;
}
