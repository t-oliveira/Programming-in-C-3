//2a. Questão (0,5) 
//Faça um programa em C para ler uma palavra e uma letra e imprimir quantas vezes essa letra aparece na palavra.
//Exemplo:
//Entre com uma palavra: unilasalle
//Entre com uma letra: l
//A letra l aparece 3 vezes na palavra unilasalle

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int i, cont=0,tam;
	char palavra[20];
	char letra [20];
	
printf("\nEntre com uma palavra: \n");
scanf ("%s", &palavra);
printf("\nEntre com uma letra: \n");
scanf ("%s", &letra);
	
tam=strlen(palavra);


	for (i=0;i<tam;i++){
		if(palavra[i] == letra[0]) {
		cont++;			
			}}
		
		printf("\nA letra aparece %d vezes na palavra escrita !\n",cont);
			
	return 0;
}
