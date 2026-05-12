/*Faça um programa que verifique 3 condições (temperatura,umidade e estoque)*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt-BR.UTF-8");

    float temperatura, umidade;
    unsigned int estoque, estoque_minimo = 1000;

    printf("Digite a temperatura: \n");
    scanf(" %f", &temperatura);
    printf("Digite a umidade: \n");
    scanf(" %f", &umidade);
    printf("Digite o estoque: \n");
    scanf(" %u", &estoque);

    if (temperatura<30) {
        printf("Temperatura está dentro dos parâmetros. \n");
    }else {
        printf("Temperatura está fora dos parâmetros. \n");
    }

    if (umidade<50) {
        printf("Umidade está dentro dos parâmetros. \n");
    }else {
        printf("Umidade está fora dos parâmetros. \n");
    }


    if(estoque>estoque_minimo) {
        printf("Estoque normal. \n");
    }else {
        printf("Estoque abaixo do normal. \n");
    }

    return 0;

}