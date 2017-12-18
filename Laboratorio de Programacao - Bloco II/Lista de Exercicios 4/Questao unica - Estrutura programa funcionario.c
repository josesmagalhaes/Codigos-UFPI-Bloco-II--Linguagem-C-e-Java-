/*
1.	Crie uma estrutura para representar os dados de um funcionário, com 
matrícula de tipo inteiro, nome de tipo string, estado civil de tipo string, 
endereço do tipo string, cargo de tipo string, salário de tipo float e data 
de nascimento de tipo data. O tipo data deve ser definido como uma estrutura 
com os membros dia, mês e ano de tipo inteiro. Com essa estrutura faça as seguintes operações:

a.	Crie um vetor de 20 posições para armazenar o cadastro de funcionários 
de uma empresa fictícia

b.	Crie uma variável chamada fim que demarcará a última posição atualmente 
preenchida em seu cadastro de funcionários

c.	Faça com que o programa apresente um menu onde o usuário possa escolher 
entre as funções de cadastrar funcionário, excluir funcionário, alterar funcionário, 
buscar funcionário, listar todos os funcionários e sair

i.	O usuário deverá poder escolher qualquer das opções qualquer quantidade de vezes. 
Somente ao escolher a opção sair o programa deve ser finalizado.

d.	Quando a opção cadastrar funcionário for escolhida, leia todos os dados de 
um funcionário e o inclua na primeira posição livre do vetor. A variável fim deve 
ser aumentada de um

i.	Se já houverem vinte funcionários cadastrados (limite do nosso vetor), o programa 
deverá mostrar a mensagem “Impossível cadastrar. Vetor cheio”

e.	Quando a opção excluir funcionário for escolhida, o programa deverá solicitar 
a posição que o usuário deseja excluir. Caso a opção esteja preenchida com um funcionário 
no vetor, todos os elementos, a partir daquela posição para frente devem ser “puxados” uma 
posição para trás, para refletir a exclusão. A variável fim deve ser reduzida de um. 
Caso contrário, deverá ser exibida a mensagem “Impossível excluir. Posição inválida”

f.	Quando a opção alterar funcionário for escolhida, o usuário deverá escolher a posição 
a alterar. Caso esta posição esteja preenchida com os dados de um funcionário, o programa 
deverá mostrar os dados atuais e pedir para o usuário digitar novamente todos os dados para 
aquele funcionário. Caso contrário, deverá mostrar a mensagem “Impossível alterar. Posição 
não preenchida”

g.	Quando a opção buscar funcionário for escolhida, o programa deverá solicitar ao usuário 
o nome a procurar. Após isso, o programa irá buscar, entre os funcionários cadastrados, um com 
nome procurado (ou parte dele). Caso encontre, deverá mostrar todos os dados desse funcionário. 
Caso contrário, deverá exibir a mensagem “Funcionário não encontrado”

h.	Quando a opção listar todos os funcionários for selecionada, o programa deve exibir todos 
os dados de todos os funcionários cadastrados até o momento. Se nenhum funcionário estiver 
cadastrado, deverá exibir a mensagem “Nenhum funcionário cadastrado”

i.	Quando a opção sair for escolhida, o programa deverá finalizar

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fim =0;	
struct date {
	int dia;
	int mes;
	int ano;
};
	
struct funcionario {
	int matricula;
	char nome[100];
	char estadoCivil[100];
	char endereco[100];
	char cargo[100];
	float salario;
	struct date dataNascimento;
}tipoFuncionario[20];
	
void cadastrarFuncionario(){
	printf ("Digite a matricula do funcionario: \n");
	scanf ("%d",&tipoFuncionario[fim].matricula);
	setbuf(stdin, NULL);
	printf ("Digite o nome do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[fim].nome);
	setbuf(stdin, NULL);
	printf ("Digite o estado civil do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[fim].estadoCivil);
	setbuf(stdin, NULL);
	printf ("Digite o endereco do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[fim].endereco);
	setbuf(stdin, NULL);
	printf ("Digite o cargo do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[fim].cargo);
	setbuf(stdin, NULL);
	printf ("Digite o salario do funcionario: \n");
	scanf ("%f", &tipoFuncionario[fim].salario);
	setbuf(stdin, NULL);	
	printf ("Digite a data de nascimento do funcionario: (dd/mm/aa) \n");
	scanf ("%d %d %d", &tipoFuncionario[fim].dataNascimento.dia, &tipoFuncionario[fim].dataNascimento.mes, &tipoFuncionario[fim].dataNascimento.ano);
	fim++;
}

void excluirFuncionario(int posicao){
	int i;
	if (fim<=1)fim--;
	else {
		for (i=posicao;i<fim;i++){
			tipoFuncionario[i]=tipoFuncionario[i+1];
		}
		fim--;
	}
	

}

void alterarFuncionario(int posicaoA){
	int i=0;
	for (i=posicaoA;i<=posicaoA;i++){
	printf ("DADOS ATUAIS\n");
	printf ("Matricula: %d\n", tipoFuncionario[i].matricula);
	printf ("Nome: %s\n", tipoFuncionario[i].nome);
	printf ("Estado Civil: %s\n", tipoFuncionario[i].estadoCivil);		
	printf ("Endereco: %s\n", tipoFuncionario[i].endereco);		
	printf ("Cargo: %s\n", tipoFuncionario[i].cargo);		
	printf ("Salario: %.2f\n", tipoFuncionario[i].salario);		
	printf ("Data de nascimento: %d/%d/%d\n", tipoFuncionario[i].dataNascimento.dia,tipoFuncionario[i].dataNascimento.mes,tipoFuncionario[i].dataNascimento.ano);
	printf ("\n");
	
	printf ("Digite a matricula do funcionario: \n");
	scanf ("%d",&tipoFuncionario[posicaoA].matricula);
	setbuf(stdin, NULL);
	printf ("Digite o nome do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[posicaoA].nome);
	setbuf(stdin, NULL);
	printf ("Digite o estado civil do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[posicaoA].estadoCivil);
	setbuf(stdin, NULL);
	printf ("Digite o endereco do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[posicaoA].endereco);
	setbuf(stdin, NULL);
	printf ("Digite o cargo do funcionario: \n");
	scanf ("%[^\n]s", tipoFuncionario[posicaoA].cargo);
	setbuf(stdin, NULL);
	printf ("Digite o salario do funcionario: \n");
	scanf ("%f", &tipoFuncionario[posicaoA].salario);
	setbuf(stdin, NULL);	
	printf ("Digite a data de nascimento do funcionario: (dd/mm/aa) \n");
	scanf ("%d %d %d", &tipoFuncionario[posicaoA].dataNascimento.dia, &tipoFuncionario[posicaoA].dataNascimento.mes, &tipoFuncionario[posicaoA].dataNascimento.ano);
	}
}

void buscarFuncionario(){
	char var[20];
	int retorno, tamanho, i, valor;
		
	fflush(stdin);
	printf ("Digite um nome a ser procurado: ");
	gets (var);
		
	for (i=0;i<=fim;i++){
		tamanho=strlen(var);
		retorno = strncmp(tipoFuncionario[i].nome, var, tamanho);
		if (retorno==0){
			valor=1;
			break;
		}else{
			valor=0;
		}
	}
	if (valor==1){
		printf ("Matricula: %d\n", tipoFuncionario[i].matricula);
		printf ("Nome: %s\n", tipoFuncionario[i].nome);
		printf ("Estado Civil: %s\n", tipoFuncionario[i].estadoCivil);		
		printf ("Endereco: %s\n", tipoFuncionario[i].endereco);		
		printf ("Cargo: %s\n", tipoFuncionario[i].cargo);		
		printf ("Salario: %.2f\n", tipoFuncionario[i].salario);		
		printf ("Data de nascimento: %d/%d/%d\n", tipoFuncionario[i].dataNascimento.dia,tipoFuncionario[i].dataNascimento.mes,tipoFuncionario[i].dataNascimento.ano);
		printf ("");			
	}else if (valor==0){
		printf ("Funcionario nao encontrado");
	}

}


void listarFuncionario(){
	int i;
	for (i=0;i<fim;i++){
		printf ("Matricula: %d\n", tipoFuncionario[i].matricula);
		printf ("Nome: %s\n", tipoFuncionario[i].nome);
		printf ("Estado Civil: %s\n", tipoFuncionario[i].estadoCivil);		
		printf ("Endereco: %s\n", tipoFuncionario[i].endereco);		
		printf ("Cargo: %s\n", tipoFuncionario[i].cargo);		
		printf ("Salario: %.2f\n", tipoFuncionario[i].salario);		
		printf ("Data de nascimento: %d/%d/%d\n", tipoFuncionario[i].dataNascimento.dia,tipoFuncionario[i].dataNascimento.mes,tipoFuncionario[i].dataNascimento.ano);
		printf ("");
	}
}

int main (){
	int opcao, posicao, posicaoA, i;
	struct funcionario nomeP;
	
	while (opcao!=6){
		printf ("\nMENU\n\nDigite um dos numeros abaixo de acordo com sua opcao\n\n");
		printf ("1. Cadastrar funcionario\n2. Excluir funcionario\n3. Alterar funcionario\n4. Buscar funcionarios\n5. Listar todos os funcionarios\n6. Sair\n\n");
		scanf ("%d", &opcao);
		if (opcao==1){
			if (fim<=20){
				cadastrarFuncionario();
			}else{
				printf ("Impossivel cadastrar. Vetor cheio.");
			}

		}else if (opcao==2){
			printf ("Digite a posicao a ser procurada: ");
			scanf ("%d", &posicao);
			if (posicao<=fim){
				excluirFuncionario(posicao);
			}else{
				printf ("Impossivel excluir. Posicao invalida.");
			}

		}else if (opcao==3){
			printf ("Digite a posicao a ser alterada: ");
			scanf ("%d", &posicaoA);
			if (posicao<=fim){
				alterarFuncionario(posicaoA);
			}else{
				printf ("Impossivel Excluir. Posicao nao preenchida.");
			}
		}else if (opcao==4){
			buscarFuncionario();
		}else if (opcao==5){
			if ((fim!=0) && (fim<=20)){
				listarFuncionario();				
			}else{
				printf ("Nenhum funcionario cadastrado");
			}
			
		}else if (opcao==6){
			break;
		}	
	}
	system("pause");
	return 0;
}

