/* 9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int l, c, soma, mat[5][10], somaLinhas[5], somaColunas[10];

    srand(time(NULL));

    for(l = 0; l < 5; l++){
        for(c = 0; c < 10; c++){
            mat[l][c] = rand() % 10;
        }
    }

    for(l = 0; l < 5; l++){
        soma = 0;
        for(c = 0; c < 10; c++){
            soma += mat[l][c];
        }
        somaLinhas[l] = soma;
    }

    for(c = 0; c < 10; c++){
        soma = 0;
        for(l = 0; l < 5; l++){
            soma += mat[l][c];
        }
        somaColunas[c] = soma;
    }

    printf("\nMatriz:\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 10; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\nVetor com a soma das linhas:\n");
    for(l = 0; l < 5; l++){
        printf("Linha %d: %d\n", l, somaLinhas[l]);
    }

    printf("\n\nVetor com a soma das colunas:\n");
    for(c = 0; c < 10; c++){
        printf("Coluna %d: %d\n", c, somaColunas[c]);
    }

    return 0;
}