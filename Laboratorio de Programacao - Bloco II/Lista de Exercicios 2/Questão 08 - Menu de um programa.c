/*
8.	Fa�a um programa que crie um menu com as op��es
a seguir, sendo que, quando o usu�rio selecionar uma
op��o, o programa apenas ir� apresentar o texto �Op��o
nome_da_op��o escolhida�, com exce��o da op��o 4 que 
far� o programa terminar sua execu��o.:
1 � Cadastrar
2 � Alterar
3 � Excluir
4 � Sair
*/

#include<stdio.h>

int main () {
	int num;
	printf ("1 - Cadastrar\n");
	printf ("2 - Alterar\n");
	printf ("3 - Excluir\n");
	printf ("4 - Sair\n");
	
	scanf ("%d", &num);
	
	switch (num){
		case 1: printf ("Opcao Cadastrar escolhida"); break;
		case 2: printf ("Opcao Alterar escolhida"); break;
		case 3: printf ("Opcao Excluir escolhida"); break;
		case 4: break;
		default : printf ("Opcao invalida!");
	}
	
	return 0;
}
