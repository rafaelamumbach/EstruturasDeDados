#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x;

    x = malloc(sizeof(int));

    if (x){
        printf("AlocaÃ§Ã£o de memÃ³ria realizada.\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    } 
    else {
        printf("Erro na alocaÃ§Ã£o de memÃ³ria.\n");
    }

    return 0;
}