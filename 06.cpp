/* 6 #Escreve um programa que sorteio, aleatoriamente, N números e armazene estes em um vetor. Em seguida, o
usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se
estiver, diga a posição que está*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(int argc, const char * argv[]) {

int vet[6]; 
int i, aux;

for (i=0; i<6; i++) { 
printf( "\nInforme valor do vet[%d]:", i); 
scanf("%d", &vet[i]); 
}
printf("\ndigite valor para comparacao: " ); 
scanf("%d", &aux); 

for (i=0; i<6; i++) { 
if (aux==vet[i]) { 
printf("\nO valor digitado esta na posicao vet[%d].", i); 
}
}

return 0;
}
