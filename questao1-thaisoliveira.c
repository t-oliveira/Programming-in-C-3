//1a. Questão (0,5) 
//Faça um programa em C para:
//- Ler uma matriz 4x4;
//- Somar os elementos da 3ª linha com os elementos da 2ª coluna;
//- Exibir o somatório.

#include <stdio.h>

int main (){
	
	int i,j, matriz[4][4],soma;
	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			printf("\nEntre com o valor da matriz [%d][%d]: \n",i+1,j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	soma=(matriz[3][0]+matriz[3][1]+matriz[3][2]+matriz[3][3])+(matriz[0][1]+matriz[1][1]+matriz[2][1]+matriz[3][1]);
	
	printf("\nO valor da soma dos elementos da terceira linha com os elementos da segunda coluna e : %d \n",soma);
	
	return 0;
	
	
}
