#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tipo de retorno - identificador - parÃ¢metros
int minhaStrLen(char string[]) {
    int tam = 0;
    int i;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            tam++;
        }
    }

    return tam;
}

int main() {
    char string[100];

    printf("Digite a palavra/frase: ");
    fgets(string, sizeof(string), stdin);

    //remover o caractere de nova linha (\n) inserido pelo fgets
    string[strcspn(string, "\n")] = '\0';

    printf("VocÃª digitou: %s\n", string);
    printf("Tamanho da palavra/frase (sem espaÃ§os): %d\n", minhaStrLen(string));

    return 0;
}