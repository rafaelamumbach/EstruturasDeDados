// 3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, ... até o décimo com o décimo primeiro. Imprima o vetor N modificado.


#include <stdio.h>

void main(){

    int i, vetor[20];
    int fim = 19;
    int temp = 0;

    for(i=0; i<20; i++){
        printf("PosiÃ§Ã£o %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original: ");
    for(i=0; i<20; i++){
        printf("%2d ", vetor[i]);
    }
    
    printf("\n\n");

    for(i=0; i<10; i++){
        temp = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = temp;
        fim--;

    }

    printf("\n\n");

    printf("Vetor final: ");
    for(i=0; i<20; i++){
        printf("%2d ", vetor[i]);
    }

}