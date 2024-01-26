/*4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos diferentes. 
- O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas vendas.
- O valor unitário dos objetos deve ser informado e armazenado em um vetor. 
- A quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. 
- Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. 
- Depois, determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto.
- Ao final, deverão ser mostrados o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos empatados).*/

#include <stdio.h>

int main(){

    int i;
    float valorObjeto[10] = {};
    float salario = 1100.00;
    int qtdVendida[10] = {};
    float valorTotal = 0;
    float valorParcial = 0;
    float maisVendido = 0;
    float totalSalario = 0;


    printf(" --------------------- \n");
    printf(" | VENDAS DE JANEIRO |\n");
    printf(" --------------------- \n");
    
    
    for(i=0; i<10; i++){
        printf("Insira o valor do %d° objeto e sua quantidade vendida: ", i+1);
        scanf("%f%d", &valorObjeto[i], &qtdVendida[i]);
    }

    
    printf("--------------\n");


    for(i=0; i<10; i++){
        valorParcial = qtdVendida[i] * valorObjeto[i];
        printf("Quantidade vendida: %d              Valor unitário R$%.2f               Valor total do objeto R$%.2f\n", qtdVendida[i], valorObjeto[i], valorParcial);
        valorTotal += valorParcial;
    }
    
    totalSalario = salario + (valorTotal * 0.05);
    
    printf("\n");
    printf(" | TOTAL |\n");
    printf(" --------- \n");
    printf("-> Valor total das vendas R$%.2f\n", valorTotal);
    printf("-> Valor total da comissão: R$%.2f\n", valorTotal * 0.05);
    printf("-> Valor final do salário: R$%.2f\n", totalSalario);
    printf("\n");
    printf(" ------------ \n");
    printf(" | PRODUTOS |\n");
    printf(" ------------ \n");

    for(i=0; i<10; i++){
        if(qtdVendida[i] > maisVendido){
            maisVendido = qtdVendida[i];
        }
    }

    for(i=0; i<10; i++){
        if(qtdVendida[i] == maisVendido){
            printf("-> posição do mais vendido: %d\n", i+1);
            printf("-> preço do mais vendido: %.2f\n", valorObjeto[i]);
            printf("\n");
        }
    }

}