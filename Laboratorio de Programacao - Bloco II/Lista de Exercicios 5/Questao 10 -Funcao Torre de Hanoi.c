/*
Implemente, através de funções recursivas o algoritmo conhecido
como torres de Hanoi. Nesse problema você tem n pinos na torre A,
cada um de um tamanho, e deve movê-los para a torre B com a ajuda
de uma torre auxiliar C. A única restrição é que um pino maior não 
deve ficar sobre um menor. Dica: Esse problema é parecido com o 
fatorial, para resolver o problema grande devemos resolver o problema
imediatamente menor (n - 1) e assim por diante até chegarmos ao problema
mais simples, onde há somente um pino em A para movê-lo para B. Veja o esquema:

hanoi(n, A, B) =
hanoi(n-1, A, C)
passa o pino grande de A para B
hanoi(n-1, C, B)
*/

#include <stdio.h>
#include <stdlib.h>

void mover_pino(int p, char origem[10], char destino[10], char auxiliar[10]){
	if (p==1){
		printf ("Movendo pino %d da %s para %s\n.", p, origem, destino);
	}else{
		mover_pino(p-1,origem,auxiliar,destino);
		printf ("Movendo pino %d da %s para %s\n.", p, origem, destino);
		mover_pino(p-1, auxiliar, destino, origem);		
	}

}

int main () {
	int pinos;
	printf ("Digite a quantidade de pinos em sua Torre de Hanoi: ");
	scanf ("%d", &pinos);
	
	mover_pino (pinos, "Torre A", "Torre B", "Torre B");
	printf ("\n");
	printf ("Todos os pinos da Torre A estao na torre B!");
	
	return 0;
	system("pause");
}	
	

