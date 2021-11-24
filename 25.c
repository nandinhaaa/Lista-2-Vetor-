/* 25. Leia uma matriz inteira de N Linhas x M Colunas . Após a leitura apresente a matriz criada e encontre a quantidade de números pares, a quantidade de números ímpares.*/
#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n,m,l,c,par=0,impar=0;
	
	printf("\n Digite o número de linhas:\n");
	scanf("%d",&n);
	printf("\n Digite o número de colunas:\n");
	scanf("%d",&m);
	
	int matriz[n][m];
	
	printf("\n Digite os valores da matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	printf("\n A matriz digitada foi:\n");
	for(l=0;l<n;l++){
	for(c=0;c<m;c++){
	printf("%d  ",matriz[l][c]);
      if(matriz[l][c]%2==0){
        par++;
        
      }else{
        impar++;
      }
		}
		printf("\n");
	}
	printf("\n A matriz tem %d números pares e %d números impares.",par,impar);
	
    return 0;
}
