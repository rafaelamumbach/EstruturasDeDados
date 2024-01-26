//1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por fim, imprima os dois vetores.

#include <stdio.h>

void main(){

    int i;
    int vet[10] = {};
    int vetQuadrado[10] = {};

    for(i=0; i<10; i++){
        printf("PosiÃ§Ã£o %d: ", i);
        scanf("%d", vet[i]);
    }

    for (i=0; i<10; i++)
        vetQuadrado[i] = vet[i] * vetQuadrado[i];
       

    printf("Vetor 1: ");
    for(i=0; i<10; i++)
         printf("%d", vetQuadrado[i]);
    

    printf("Vetor 2: ");
    for(i=0; i<10; i++)
        printf("%d", vet[i]);
    
}