/*Faça um programa que calcule a quantidade de
dinheiro gasta por um fumante dados: a quantidade
de anos que ele fuma, o preço da carteira e o número
de cigarros por dia.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int qtdAnos, numeroCigarros;
	float precoCarteira, totalGasto;
	
	printf ("Digite a quantidade de anos que fuma: ");
	scanf ("%d", &qtdAnos);
	printf ("Digite o valor da carteira de cigarros: ");
	scanf ("%f", &precoCarteira);
	printf ("Digite o numero de cigarros fumados por dia: ");
	scanf ("%d", &numeroCigarros);
	
	totalGasto=(qtdAnos*365)*(numeroCigarros)*(precoCarteira/20); //20 é a quantidade de cigarros por carteira.
	printf ("O total gasto em cigarros ao longo dos anos e: %.2f\n", totalGasto);
	
	system ("PAUSE");
	return 0;
}
