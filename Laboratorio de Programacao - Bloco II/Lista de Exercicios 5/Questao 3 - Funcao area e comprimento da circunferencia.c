/*Faça um programa que contenha duas funções que recebam o 
raio de um círculo e retornem: uma a área da circunferência
 e a outra o comprimento da mesma.
*/

#include <stdio.h>

float area (){
	#define PI 3.14
	float raio;
	printf ("Para ocalculo da area, forneca o raio da circunferencia: ");
	scanf ("%f", &raio);
	
	return (raio*raio)*PI;
}

float comprimento (){
	#define PI 3.14
	float raio;
	printf ("Para o calculo do comprimento, forneca o raio da circunferencia: ");
	scanf ("%f", &raio);
	
	return (2*PI)*raio;
}

int main (){
	printf ("A area da circunferencia e: : %.2f: \n", area());
	printf ("O comprimento da circunferencia e: : %.2f: \n", comprimento());
	return 0;
}
