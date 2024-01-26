/* 8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 3 x 2 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, soma = 0, mat[3][2];

    printf("Preencha a matriz!\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("Índice [%d][%d] ==> ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            soma += mat[i][j]; // acumula a soma
            printf("%2d ", mat[i][j]); // imprime a matriz
        }
        printf("\n");
    }

    // imprime a soma dos elementos da matriz
    printf("\n\nSoma total: %d\n\n", soma);

    return 0;
}