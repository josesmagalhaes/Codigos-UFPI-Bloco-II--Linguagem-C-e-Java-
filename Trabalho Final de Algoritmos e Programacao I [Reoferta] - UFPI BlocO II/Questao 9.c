/*
Fazer uma função que receba como parâmetro a três 
notas de um aluno e retorne o conceito de sua 
média conforme a tabela abaixo: Média Conceito

8,0 ≤ média ≤ 10,0     A
6,0 ≤ média < 8,0      B
4,0 ≤ média < 6,0      C
média < 4,0            D
*/

#include <stdio.h>

char media (){
	float n1,n2,n3;
	float media;
	char conceito;
	
	printf ("Digite as tres notas do aluno: ");
	scanf ("%f %f %f", &n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	
	if ((media >=8.0)&&(media <=10)){
		conceito = 'A';
	}else if ((media >=6.0)&&(media<8.0)){
		conceito= 'B';
	}else if ((media>4.0)&&(media<6.0)){
		conceito ='C';
	}else if (media<4.0){
		conceito = 'D';
	}
	
	return conceito;
} 




int main () {
	printf ("%c", media());	
	return 0;
}
