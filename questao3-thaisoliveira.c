//Faça um programa em C para ler o peso em gramas de 3000 objetos. 
//Calcular e imprimir o menor peso e quantos objetos enquadram-se nesta medida.

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int peso[3000],i,menorpeso=0,cont=0;
	
	for (i=0;i<3000;i++){
	printf("\nDigite o peso do objeto: \n");
	scanf("%d",&peso[i]);}
	


for (i=0;i<3000;i++){	
		if (peso[i]<peso[i+1] ){
			menorpeso=peso[i];
		}}
		
	
	
	for (i=0;i<3000;i++){		
		if (peso[i]==menorpeso){	
		cont++;
		
	}}

printf("\nO objeto mais leve pesa %d gramas\n",menorpeso);
printf("\nA quantidade de objeto que pesa %d gramas e : %d\n",menorpeso,cont);

return 0;
}
