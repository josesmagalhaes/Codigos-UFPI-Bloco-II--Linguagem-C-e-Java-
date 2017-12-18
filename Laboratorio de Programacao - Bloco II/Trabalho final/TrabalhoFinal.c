#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fim = 5;
struct date	{
		int dia;
		int mes;
		int ano;	
	};

struct disciplina{
		char nome[50];
		char professor[50];
		float notas[3];
	};

struct aluno{
		int matricula;
		char nome[50];
		char endereco[100];
		struct date dataNascimento;
		struct disciplina disciplinas;
}tipoAluno[20];

void cadastroAutomatico(){
	
tipoAluno[0].matricula = 909012;
strcpy(tipoAluno[0].nome,"Carlos Aguiar Pereira");
strcpy(tipoAluno[0].endereco,"Rua Abdias Neves, S/N, Bairro Ananias");
tipoAluno[0].dataNascimento.dia = 12;
tipoAluno[0].dataNascimento.mes = 10;
tipoAluno[0].dataNascimento.ano = 1990;
strcpy(tipoAluno[0].disciplinas.nome,"Ingles Instrumental");
strcpy(tipoAluno[0].disciplinas.professor,"Carlos Araujo Sousa");
tipoAluno[0].disciplinas.notas[0] = 9.0;
tipoAluno[0].disciplinas.notas[1] = 8.0;
tipoAluno[0].disciplinas.notas[2] = 9.0;
	
tipoAluno[1].matricula = 909015;
strcpy(tipoAluno[1].nome,"Joana Lopes Silva");
strcpy(tipoAluno[1].endereco,"Rua Landre Sales, N 233, Centro");
tipoAluno[1].dataNascimento.dia = 11;
tipoAluno[1].dataNascimento.mes = 11;
tipoAluno[1].dataNascimento.ano = 1991;
strcpy(tipoAluno[1].disciplinas.nome,"Ingles Instrumental");
strcpy(tipoAluno[1].disciplinas.professor,"Carlos Araujo Sousa");
tipoAluno[1].disciplinas.notas[0] = 7.0;
tipoAluno[1].disciplinas.notas[1] = 5.0;
tipoAluno[1].disciplinas.notas[2] = 4.1;

tipoAluno[2].matricula = 909022;
strcpy(tipoAluno[2].nome,"Andre Silva Soares");
strcpy(tipoAluno[2].endereco,"Rua Josue Mendes, N 2343, Bairro Alegrete");
tipoAluno[2].dataNascimento.dia = 10;
tipoAluno[2].dataNascimento.mes = 11;
tipoAluno[2].dataNascimento.ano = 1992;
strcpy(tipoAluno[2].disciplinas.nome,"Calculo I");
strcpy(tipoAluno[2].disciplinas.professor,"Sousandrade Vitor Assunsao");
tipoAluno[2].disciplinas.notas[0] = 7.0;
tipoAluno[2].disciplinas.notas[1] = 7.5;
tipoAluno[2].disciplinas.notas[2] = 4.1;

tipoAluno[3].matricula = 909055;
strcpy(tipoAluno[3].nome,"Simone Brito Silva");
strcpy(tipoAluno[3].endereco,"Rua Carlos Magno, S/N, Zona Leste");
tipoAluno[3].dataNascimento.dia = 25;
tipoAluno[3].dataNascimento.mes = 12;
tipoAluno[3].dataNascimento.ano = 1989;
strcpy(tipoAluno[3].disciplinas.nome,"Calculo I");
strcpy(tipoAluno[3].disciplinas.professor,"Sousandrade Vitor Assunsao");
tipoAluno[3].disciplinas.notas[0] = 7.5;
tipoAluno[3].disciplinas.notas[1] = 10.0;
tipoAluno[3].disciplinas.notas[2] = 9.1;

tipoAluno[4].matricula = 909012;
strcpy(tipoAluno[4].nome,"Benedito Romao Lima");
strcpy(tipoAluno[4].endereco,"Rua Pedro Lima, N 345, Centro");
tipoAluno[4].dataNascimento.dia = 24;
tipoAluno[4].dataNascimento.mes = 10;
tipoAluno[4].dataNascimento.ano = 1988;
strcpy(tipoAluno[4].disciplinas.nome,"Circuitos Digitais");
strcpy(tipoAluno[4].disciplinas.professor,"Sebastiao Jonas Sousa");
tipoAluno[4].disciplinas.notas[0] = 7.2;
tipoAluno[4].disciplinas.notas[1] = 9.6;
tipoAluno[4].disciplinas.notas[2] = 9.5;

}

void cadastrarAluno() {
		printf("Digite a matricula do Aluno:\n");
		scanf("%d", &tipoAluno[fim].matricula);
		setbuf(stdin, NULL);
		printf("Digite o nome do Aluno:\n");
		scanf("%[^\n]s", tipoAluno[fim].nome);
		setbuf(stdin, NULL);
		printf("Digite o endereco do Aluno:\n");
		scanf("%[^\n]s", tipoAluno[fim].endereco);
		setbuf(stdin, NULL);
		printf("Digite a data de nascimento do aluno: (dd/mm/aa)\n");
		scanf("%d %d %d", &tipoAluno[fim].dataNascimento.dia, &tipoAluno[fim].dataNascimento.mes, &tipoAluno[fim].dataNascimento.ano);
		setbuf(stdin, NULL);
		printf("Digite o nome da disciplina: \n");
   		gets(tipoAluno[fim].disciplinas.nome);
		setbuf(stdin, NULL);   		
		printf("Digite o nome do professor da disciplina: \n"); 
   		gets(tipoAluno[fim].disciplinas.professor);
		setbuf(stdin, NULL);  		
   		printf ("Digite as tres notas dos alunos respectivamente: \n");
   		scanf("%f %f %f", &tipoAluno[fim].disciplinas.notas[0],&tipoAluno[fim].disciplinas.notas[1],&tipoAluno[fim].disciplinas.notas[2]);
		fim++;
	}

void excluirAluno(int posicao){
	int i;
	if (fim<=1)fim--;
	else {
		for (i=posicao;i<fim;i++){
			tipoAluno[i]=tipoAluno[i+1];
		}
		fim--;
	}
	

}

void alterarAluno(int posicaoA){
	int i=0;
	for (i=posicaoA;i<=posicaoA;i++){
	printf ("DADOS ATUAIS\n");
	printf ("Matricula: %d\n", tipoAluno[i].matricula);
	printf ("Nome: %s\n", tipoAluno[i].nome);
	printf ("Endereco: %s\n", tipoAluno[i].endereco);		
	printf ("Data de nascimento: %d/%d/%d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
	printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
	printf ("\n");
	
	printf("Digite a matricula do Aluno:\n");
	scanf("%d", &tipoAluno[posicaoA].matricula);
	setbuf(stdin, NULL);
	printf("Digite o nome do Aluno:\n");
	scanf("%[^\n]s", tipoAluno[posicaoA].nome);
	setbuf(stdin, NULL);
	printf("Digite o endereco do Aluno:\n");
	scanf("%[^\n]s", tipoAluno[posicaoA].endereco);
	setbuf(stdin, NULL);
	printf("Digite a data de nascimento do aluno: (dd/mm/aa)\n");
	scanf("%d %d %d", &tipoAluno[posicaoA].dataNascimento.dia, &tipoAluno[posicaoA].dataNascimento.mes, &tipoAluno[posicaoA].dataNascimento.ano);
	setbuf(stdin, NULL);
	printf("Digite o nome da disciplina: \n");
   	gets(tipoAluno[posicaoA].disciplinas.nome);
	setbuf(stdin, NULL);   		
	printf("Digite o nome do professor da disciplina: \n"); 
   	gets(tipoAluno[posicaoA].disciplinas.professor);
	setbuf(stdin, NULL);  		
   	printf ("Digite as tres notas dos alunos respectivamente: \n");
   	scanf("%f %f %f", &tipoAluno[posicaoA].disciplinas.notas[0],&tipoAluno[posicaoA].disciplinas.notas[1],&tipoAluno[posicaoA].disciplinas.notas[2]);
	}
}

void buscarAluno(){
	char var[20];
	int retorno, tamanho, i, valor;
		
	fflush(stdin);
	printf ("Digite um nome a ser procurado: ");
	gets (var);
		
	for (i=0;i<=fim;i++){
		tamanho=strlen(var);
		retorno = strncmp(tipoAluno[i].nome, var, tamanho);
		if (retorno==0){
			valor=1;
			break;
		}else{
			valor=0;
		}
	}
	if (valor==1){
		printf ("Matricula: %d\n", tipoAluno[i].matricula);
		printf ("Nome: %s\n", tipoAluno[i].nome);
		printf ("Endereco: %s\n", tipoAluno[i].endereco);		
		printf ("Data de nascimento: %d/%d/%d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
		printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
		printf ("\n");			
	}else if (valor==0){
		printf ("Aluno nao encontrado");
	}

}

void listarAluno () {
	int i;
	for (i=0;i<fim;i++){
		printf ("Matricula: %d\n", tipoAluno[i].matricula);
		printf ("Nome: %s\n", tipoAluno[i].nome);
		printf ("Endereco: %s\n", tipoAluno[i].endereco);		
		printf ("Data de nascimento: %d/%d/%d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
		printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
		printf ("\n");
	}
	
}

void listarAprovado () {
	int i, valor;
	float media;
	
	valor=0;
	media=0;
	for (i=0;i<fim;i++){
		media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
		if (media>=7.0){
			printf ("Matricula: %d\n", tipoAluno[i].matricula);
			printf ("Nome: %s\n", tipoAluno[i].nome);
			printf ("Endereco: %s\n", tipoAluno[i].endereco);		
			printf ("Data de nascimento: %d/%d/%d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
			printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
			printf ("\n");
			valor=1;
			}else{
				valor=0;
			}
		}
		if (valor==0){
			printf ("Nenhum aluno aprovado encontrado");
		}
		
	}	

void listarDisciplina () {
	char var[20];
	int retorno, tamanho, i, valor=0;
	float media;
		
	fflush(stdin);
	printf ("Digite uma disciplia a ser procurada: ");
	gets (var);
		
	for (i=0;i<=fim;i++){
		tamanho=strlen(var);
		retorno = strncmp(tipoAluno[i].disciplinas.nome, var, tamanho);
		if (retorno==0){
			media = (tipoAluno[i].disciplinas.notas[0]+tipoAluno[i].disciplinas.notas[1]+tipoAluno[i].disciplinas.notas[2])/3;
			printf ("Matricula: %d\n", tipoAluno[i].matricula);
			printf ("Nome: %s\n", tipoAluno[i].nome);
			printf ("Endereco: %s\n", tipoAluno[i].endereco);		
			printf ("Data de nascimento: %d/%d/%d\n", tipoAluno[i].dataNascimento.dia,tipoAluno[i].dataNascimento.mes,tipoAluno[i].dataNascimento.ano);
			printf ("Disciplina: %s\nProfessor da disciplina: %s\nNotas da disciplina: %.2f %.2f %.2f\n", tipoAluno[i].disciplinas.nome,tipoAluno[i].disciplinas.professor,tipoAluno[i].disciplinas.notas[0], tipoAluno[i].disciplinas.notas[1],tipoAluno[i].disciplinas.notas[2]);
			printf ("MEDIA DO ALUNO: %.2f\n", media);
			if (media>=7.0){
				printf ("SITUACAO: AM\n");
			}else if ((media <7.0)&&(media>=4.0)){
				printf ("SITUACAO: EF/n");
			}else if (media<4.0){
				printf ("SITUACAO: RN\n");
			}
			printf ("\n");
			valor=1;
		}
	}		
	if (valor==0){
		printf ("Nenhum aluno encontrado para a disciplina procurada");
	}	
}	


int main () {
	int opcao, posicao, posicaoA, i;
	struct aluno nomeP;
	
	cadastroAutomatico();

	while (opcao!=8){
		printf ("\nMENU\n\nDigite um dos numeros abaixo de acordo com sua opcao\n\n");
		printf ("1. Cadastrar aluno\n2. Excluir aluno\n3. Alterar aluno\n4. Buscar alunos\n5. Listar todos os alunos\n6. Listar aluno de determinada disciplina\n7. Listar alunos aprovados\n8. Sair\n\n");
		scanf ("%d", &opcao);
		if (opcao==1){
			if (fim<20){
				cadastrarAluno();
			}else{
				printf ("Impossivel cadastrar. Vetor cheio.");
			}

		}else if (opcao==2){
			printf ("Digite a posicao a ser procurada: ");
			scanf ("%d", &posicao);
			if (posicao<=fim){
				excluirAluno(posicao);
			}else{
				printf ("Impossivel excluir. Posicao invalida.");
			}

		}else if (opcao==3){
			printf ("Digite a posicao a ser alterada: ");
			scanf ("%d", &posicaoA);
			if (posicao<=fim){
				alterarAluno(posicaoA);
			}else{
				printf ("Impossivel Excluir. Posicao nao preenchida.");
			}
		}else if (opcao==4){
			buscarAluno();
		}else if (opcao==5){
			if ((fim!=0) && (fim<20)){
				listarAluno();				
			}else{
				printf ("Nenhum aluno cadastrado");
			}
			
		}else if (opcao==6){
			if ((fim!=0) && (fim<20)){			
				listarDisciplina();		
			}else{
				printf ("Nenhum aluno encontrado para a disciplina procurada");
			}
			
		}else if (opcao==7){
			if ((fim!=0) && (fim<20)){
				listarAprovado();				
			}else{
				printf ("Nenhum aluno cadastrado.");
			}			
		}else if (opcao==8){
			break;
		}	
	}
	system("pause");
	return 0;
}

