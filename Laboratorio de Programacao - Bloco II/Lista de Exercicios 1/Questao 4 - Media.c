/*Fa�a um programa que crie tr�s vari�veis para receber
as tr�s notas de um aluno e calcule e imprima a m�dia desse aluno.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	float nota1, nota2, nota3, media;
	printf ("Digite a primeira  nota do aluno: ");
	scanf ("%f", &nota1);
	printf ("Digite a segunda  nota do aluno: ");
	scanf ("%f", &nota2);	
	printf ("Digite a terceira  nota do aluno: ");
	scanf ("%f", &nota3);
	
	media=nota1+nota2+nota3/3;
	
	printf ("A media das tr�s notas e: %.2f\n", media);
		
	system ("PAUSE");
	return 0;
}
