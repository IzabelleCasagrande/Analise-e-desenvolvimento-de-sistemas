/*
  Projeto: Hora de Codar - Nível Aventureiro
  Objetivo: Calcular a média aritmética de três notas utilizando operadores de atribuição e casting.
  Estudante: Izabelle Casagrande
  Data: Abril/2026
*/
#include <stdio.h>

int main() {
    float n1,n2,n3;
    float media;

    printf("***  Programa de Cálculo de Média ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f",&n1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f",&n2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f",&n3);

    media =(n1+n2+n3)/3;

    printf("A média é: %.2f",media);
    
    return 0;
}