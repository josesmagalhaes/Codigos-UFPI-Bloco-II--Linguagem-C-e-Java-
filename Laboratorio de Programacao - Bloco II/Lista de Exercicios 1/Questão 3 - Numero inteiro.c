/*3.	Fa�a um programa que leia um n�mero nome e escreva
a mensagem �O n�mero digitado foi� seguido do n�mero recebido: 
Ex: entrada: 10; sa�da: O n�mero digitado foi 10.*/

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
