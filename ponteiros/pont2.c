#include <stdio.h>

int main(){
    char *p, letra = 'f';
    p = &letra; // atribuiÃ§Ã£o vÃ¡lida

    printf("Valor apontado por p: %c\n", *p);

}