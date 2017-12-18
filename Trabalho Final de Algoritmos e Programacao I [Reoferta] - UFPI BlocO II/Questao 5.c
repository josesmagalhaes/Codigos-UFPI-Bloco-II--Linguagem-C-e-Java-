/*
Faça um algoritmo que leia o nome de um piloto, uma distância 
percorrida em km e o tempo que o piloto levou para percorrê-la 
em horas). O programa deve calcular a velocidade média - 
Velocidade =Distância / Tempo - em km/h, e exibir a seguinte frase:
“A velocidade média do <nome do piloto> foi <velocidade media calculada> km/h.”
*/

#include <stdio.h>
#include <string.h>


int main () {
	char nome[50];
	float distancia,tempo,velocidade;
	
	printf ("Digite o nome do piloto: ");
	gets(nome);
	setbuf(stdin, NULL);
	printf ("Digite a distancia percorrida em KM: ");
	scanf ("%f", &distancia);
	printf ("Digite o tempo que o piloto levou para percorre-la: ");
	scanf ("%f", &tempo);
	
	velocidade = distancia/tempo;
	
	printf ("A velocidade media do piloto %s foi de %.2f km/h", nome,velocidade);
	
	
	return 0;
}
