/*
2.	Fa�a um programa que receba as 3 notas de um
aluno e calcule a m�dia final, mostrando ainda o
resultado, seguindo a seguinte regra: se a m�dia 
for maior ou igual a 7, APROVADO; se a m�dia for 
maior ou igual a 4 e menor que 7, PROVA FINAL; 
se a m�dia for menor que 4, REPROVADO.
*/

#include<stdio.h>

int main () {
	float nota1, nota2, nota3, media;
	printf ("Digite as tr�s notas do aluno respectivamente: ");
	scanf ("%f %f %f", &nota1, &nota2, &nota3);
	media = (nota1+nota2+nota3)/3;
	
	if (media>= 7.0){
		printf ("Media = %.2f\n", media);
		printf ("APROVADO");
	}else if ((media>=4.0) && (media<7.0)){
		printf ("Media = %.2f\n", media);
		printf ("PROVA FINAL");		
	}else if (media<4.0){
		printf ("Media = %.2f\n", media);
		printf ("REPROVADO");			
	}
	
	return 0;
}
