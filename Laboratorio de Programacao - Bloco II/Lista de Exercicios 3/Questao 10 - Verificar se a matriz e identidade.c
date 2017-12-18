/*
Faça um programa que receba os elementos de uma matriz 4x4. Exiba a matriz e 
verifique se ela é a identidade. Na figura a seguir temos um exemplo de matriz 
identidade para dimensão 2x2.
*/

#include <stdio.h>
int main (){
	int i,j,a[4][4];
	for (i=0; i<4;i++) {
		for (j=0;j<4;j++){
			printf ("digite o numero da matriz [%d][%d]  ", i,j);
			scanf ("%d", &a[i][j]);
		}
	}
for (i=0; i<4; i++){
	puts (" ");
	for (j=0;j<4;j++){
		printf ("%d\t", a[i][j]);
	}
}

if ( a[0][0]==1 && a[1][1]==1 && a[2][2] ==1 && a[3][3]==1 && a[0][1]==0 && a[0][2]==0 && a[0][3] ==0 && a[1][2]==0 && a[1][3]==0 && a[2][3]==0 && a[1][0] ==0 && a[2][0]==0 &&  a[2][1]==0 && a[3][0]==0 && a[3][1] ==0 && a[3][2]==0 )
printf ("matriz A e identidade");
else
printf ("A nao e matriz identidade");

return 0;
}
