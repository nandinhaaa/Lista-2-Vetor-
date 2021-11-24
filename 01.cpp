/*1. Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
e o limite do vetor é 100) e apresente a soma de seus elementos*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
 int vetor[10], i, soma=0;

 for(i=0; i<10; i++)
 {   
 printf("\nIndice:%i  ",i);
 scanf("%i",&vetor[i]);
 soma=soma+vetor[i];
 }

 printf("\nA Soma dos vetores= %i",soma);
 printf("\n");
 system("pause");
 
 
 return 0;
}
