#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0;
    } else {
        int i, contaDiv = 0;
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                contaDiv++;
                if (contaDiv > 2) {
                    break;
                }
            }
        }

        if (contaDiv == 2) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {
    while (1) {
        int num, continuar, resultado;

        printf("ðŸ’¡ Ã‰ primo?\n");
        printf("Digite um nÃºmero: ");
        scanf("%d", &num);

        resultado = ehPrimo(num);

        if (resultado == 0) {
            printf("O nÃºmero %d NÃƒO Ã© primo!\n\n", num);
        }

        if (resultado == 1) {
            printf("O nÃºmero %d Ã© primo!\n\n", num);
        }

        printf("ðŸ’¡ Deseja analisar outro nÃºmero?\n");
        printf("1- SIM\n2- NÃƒO\n");
        scanf("%d", &continuar);

        if (continuar == 2) {
            printf("Finalizando...\n");
            break;
        }
    }

    return 0;
}