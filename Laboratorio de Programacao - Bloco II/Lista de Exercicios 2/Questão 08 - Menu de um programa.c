/*
8.	Faça um programa que crie um menu com as opções
a seguir, sendo que, quando o usuário selecionar uma
opção, o programa apenas irá apresentar o texto “Opção
nome_da_opção escolhida”, com exceção da opção 4 que 
fará o programa terminar sua execução.:
1 – Cadastrar
2 – Alterar
3 – Excluir
4 – Sair
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
