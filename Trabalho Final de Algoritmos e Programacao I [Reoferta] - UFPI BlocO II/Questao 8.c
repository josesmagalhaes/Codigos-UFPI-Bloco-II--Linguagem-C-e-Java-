/*
Entrar com o nome, matrícula e a média das notas de uma turma 
de alunos. Guardar todas essas informações em um vetor e 
exibir os alunos com média das notas reprovativa.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fim = 0;

struct turma {
	char nome[30];
	int matricula;
	float media;
}turmaAlunos[10];

void cadastrarAluno() {
	printf ("Digite o nome do aluno: ");
	scanf("%[^\n]s", turmaAlunos[fim].nome);
	printf("Digite a matricula do Aluno:\n");
	scanf("%d", &turmaAlunos[fim].matricula);
	setbuf(stdin, NULL);
	printf ("Digite a media do aluno: ");
	scanf ("%f", &turmaAlunos[fim].media);
	setbuf(stdin, NULL);
	printf ("\n");
	fim++;
}

void procurarAluno() {
	int i;
	printf ("ALUNOS COM MEDIA REPROVATIVA\n");
	
	for (i=0;i<fim;i++){
		if (turmaAlunos[i].media <7.0){
			printf ("ALUNO: %s\n", turmaAlunos[i].nome);
			printf ("MATRICULA: %d\n", turmaAlunos[i].matricula);
			printf ("MEDIA: %.1f\n", turmaAlunos[i].media);
		}
				
	}
	
}

int main () {
	int i=0;
	for (i=0;i<3;i++){
		cadastrarAluno();	
	}
	
	procurarAluno();
	
	system("pause");	
	return 0;
}
