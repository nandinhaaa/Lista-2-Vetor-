/*10. Receber um vetor de N posições do tipo inteiro verificar quantas vezes um dado valor informado pelo
usuário se encontra no vetor. Apresente também todos elementos do vetor*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(void){
    int matriz[20][2] = {{0},{0}}, numero;
    int i, n, elemento = 0, novo;

    for(i = 0; i < 20; i++){
        printf("Elemento %d = ", i + 1);
        scanf("%d", &numero);

        if(numero < 0){
            break;
        }

        for(n = 0, novo = 1; n <= i; n++){
            if(matriz[n][0] == numero){                
                matriz[n][1]++;
                novo = 0;
                break;
            }
        }

        if(novo){
            matriz[elemento][0] = numero;
            matriz[elemento][1]++;
            elemento++;          
        }
    }

    for(i = 0; i < elemento; i++){
        if(matriz[i][1] > 1){
            printf(" O numero %d aparece %d vezes\n", matriz[i][0], matriz[i][1]);
        }
    }

    return 0;
}
