/*3. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
impares existem no vetor. Apresente o vetor e a quantidade de impares no final*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, infoImpares=0 ,infoPares=0;
	int N [10];
	for(i=0; i<10 ; i++	){
		printf(" \nDigite os elementos inteiros ",i);
		scanf("%i",&N[i]);
		if (N [i] %2 == 0){
			infoPares+=1;
		}else{
			infoImpares+=1;
		}
	}
	printf("\n");
	printf("Vetor com elementos Impares = %i: ",infoImpares);
	
	return 0;	
	
}
