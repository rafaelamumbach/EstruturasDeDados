/* 6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um código inteiro e faça uma das ações abaixo:
0 -“ finaliza o programa;
1 -“ imprime o vetor na ordem do início ao fim;
2 -“ imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, opcao;
    float vetor[10];

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }

    do{
        printf("\n\n");
        printf("--------\n");
        printf("| MENU |\n");
        printf("--------\n");
        printf("0 - Finalizar\n1 - Imprimir vetor\n2 - Imprimir vetor invertido\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 0:
            printf("Finalizando...\n");
            break;
        case 1:
            for(i = 0; i < 10; i++){
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            for(i = 9; i >= 0; i--){
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        default:
            printf("Opcao inválida!\n");
        }

    } while(opcao != 0);

    return 0;
}