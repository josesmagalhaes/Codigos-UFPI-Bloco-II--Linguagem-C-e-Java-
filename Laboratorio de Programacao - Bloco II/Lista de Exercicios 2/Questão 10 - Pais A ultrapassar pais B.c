/*
10.	Dado um pa�s A, com 5.000.000 de habitantes
e uma taxa de natalidade de 3% ao ano, e um pa�s
B com 7.000.000 de habitantes e uma taxa de 
natalidade de 2% ano, calcular e imprimir o tempo
necess�rio para que a popula��o do pa�s A ultrapasse a do pa�s B.
*/

#include<stdio.h>

int main () {
	float a, b;
	int i;
	
	a= 5000000;
	b= 7000000;
	i=0;
	
	while (a<=b){
		a=a*1.03;
		b=b*1.02;
		i++;
	}
	printf ("O pais A vai demorar %d anos para ultrapassar a populacao do pais B!", i);
	
	return 0;
}
