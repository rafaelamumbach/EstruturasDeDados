//2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado em um terceiro vetor. Imprima os três vetores na tela.

#include <stdio.h>

void main(){

    int i;
    int vet1[5] = {2, 4, 6, 8, 10};
    int vet2[5] = {1, 3, 5, 7, 9};
    int vet3[5] = {};

    for (i=0; i<5; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("Vetor 1: ");
    for(i=0; i<5; i++){
        printf("%d", vet1[i]);
    }

    printf("Vetor 2: ");
    for(i=0; i<5; i++){
        printf("%d", vet2[i]);
    }

    printf("Vetor 3: ");
    for(i=0; i<5; i++){
        printf("%d", vet3[i]);
    }

}