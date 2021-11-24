/*7 Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
	int main(){
	int a[3], b[3], c[3], i;
    for (i = 0; i<3; i++) {
        printf("Insira o %d elemento do vetor  1: ", (i+1));
        scanf("%d", &a[i]);
    }
    for (i = 0; i<3; i++) {
        printf("Insira o %do elemento do vetor 2: ", (i+1));
        scanf("%d", &b[i]);
    }
    for (i = 0; i<3; i++) {
        c[i] = a[i] * b[i];
        printf("\n");
        printf("\n%do elemento do vetor resultante: %d", (i+1), c[i]);
    }
    return 0;
}
