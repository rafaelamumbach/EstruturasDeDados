/* 5) Façaa um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor.
Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro). Desconsidere empates.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, indiceMaior, indiceMenor;
    float menor = 99, maior = 0, temp[12];
    char *nomesMeses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
                          "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    for(i = 0; i < 12; i++) {
        printf("Digite a temperatura do mês %d: ", i + 1);
        scanf("%f", &temp[i]);

        if (menor > temp[i]) {
            menor = temp[i];
            indiceMenor = i;
        }
        if (maior < temp[i]) {
            maior = temp[i];
            indiceMaior = i;
        }
    }

    printf("A menor temperatura foi %.2f e ocorreu no mês de %s.\n", menor, nomesMeses[indiceMenor]);
    printf("A maior temperatura foi %.2f e ocorreu no mês de %s.\n", maior, nomesMeses[indiceMaior]);

    return 0;
}