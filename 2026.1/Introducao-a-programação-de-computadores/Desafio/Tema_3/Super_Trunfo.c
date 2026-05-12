#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1,codigo1[10],nome1[50];
    char estado2,codigo2[10],nome2[50];

    unsigned long int populacao1;
    unsigned long int populacao2;

    int turistico1;
    int turistico2;

    float area1,pib1;
    float area2,pib2;

    float densidade1,pibpercapita1;
    float densidade2,pibpercapita2;

    float superPoder1;
    float superPoder2;

    float inverso1;
    float inverso2;

    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
        // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("SUPER TRUNFO\n");
    printf("Vamos cadastrar nossa primeira carta!\n");
    printf("\n");

  //Leitura de dados da primeira carta.
    printf("Insira uma letra de A a H: ");
    scanf(" %c",&estado1);
    printf("Digite o código da carta: ");
    scanf("%s",codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s",nome1);
    printf("Digite a população: ");
    scanf("%lu",&populacao1);
    printf("Digite a área: ");
    scanf("%f",&area1);
    printf("Digite o PIB: ");
    scanf("%f",&pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&turistico1);
    printf("\n");

  //Leitura de dados da segunda carta.
    printf("Vamos cadastrar a segunda carta!\n");
    printf("Insira uma letra de A a H: ");
    scanf(" %c",&estado2);
    printf("Digite o código da carta: ");
    scanf("%s",codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s",nome2);
    printf("Digite a população: ");
    scanf("%lu",&populacao2);
    printf("Digite a área: ");
    scanf("%f",&area2);
    printf("Digite o PIB: ");
    scanf("%f",&pib2);
    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d",&turistico2);
    printf("\n");
    
     // Área para calculo da densidade populacional e pib per capita das duas cartas
    densidade1= (float) populacao1/area1;
    densidade2= (float) populacao2/area2;

  //Área para calculo do PIB per Capita
    pibpercapita1= (float) (pib1*1000000000.0f)/ (float)populacao1;
    pibpercapita2= (float) (pib2*1000000000.0f)/ (float)populacao2;
  
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    printf("COMPARAÇÃO DAS CARTAS\n");
    printf("===============================\n");
    printf("\n");

    printf("(Atributo: População)\n");
    if (populacao1>populacao2) {
        printf("Carta 1 - %s: %lu\n",nome1,populacao1);
        printf("Carta 2 - %s: %lu\n",nome2,populacao2);
        printf("Carta 1 (%s) venceu!\n",nome1);
    } else {
        printf("Carta 1 - %s: %lu\n",nome1,populacao1);
        printf("Carta 2 - %s: %lu\n",nome2,populacao2);
        printf("Carta 2 (%s) venceu!\n",nome2);
    }
    
    printf("\n");
    
    printf("(Atributo: Área)\n");
    if (area1>area2) {
        printf("Carta 1 - %s: %f\n",nome1,area1);
        printf("Carta 2 - %s: %f\n",nome2,area2);
        printf("Carta 1 (%s) venceu!\n",nome1);
    } else {
        printf("Carta 1 - %s: %f\n",nome1,area1);
        printf("Carta 2 - %s: %f\n",nome2,area2);
        printf("Carta 2 (%s) venceu!\n",nome2);
    }

    printf("\n");

    printf("(Atributo: PIB)\n");
    if (pib1>pib2) {
        printf("Carta 1 - %s: %f\n",nome1,pib1);
        printf("Carta 2 - %s: %f\n",nome2,pib2);
        printf("Carta 1 (%s) venceu!\n",nome1);
    } else {
        printf("Carta 1 - %s: %f\n",nome1,pib1);
        printf("Carta 2 - %s: %f\n",nome2,pib2);
        printf("Carta 2 (%s) venceu!\n",nome2);
    }

    printf("\n");

    printf("(Atributo: Número de Pontos Turísticos)\n");
    if (turistico1>turistico2) {
        printf("Carta 1 - %s: %d\n",nome1,turistico1);
        printf("Carta 2 - %s: %d\n",nome2,turistico2);
        printf("Carta 1 (%s) venceu!\n",nome1);
    } else {
        printf("Carta 1 - %s: %d\n",nome1,turistico1);
        printf("Carta 2 - %s: %d\n",nome2,turistico2);
        printf("Carta 2 (%s) venceu!\n",nome2);
    }
        printf("\n");

        printf("(Atributo: Densidade Populacional)\n");
    if (densidade1<densidade2) {
        printf("Carta 1 - %s: %f\n",nome1,densidade1);
        printf("Carta 2 - %s: %f\n",nome2,densidade2);
        printf("Carta 1 (%s) venceu!\n",nome1);
    } else {
        printf("Carta 1 - %s: %.2f\n",nome1,densidade1);
        printf("Carta 2 - %s: %.2f\n",nome2,densidade2);
        printf("Carta 2 (%s) venceu!\n",nome2);
    }
        printf("\n");

        printf("(Atributo: PIB per capita)\n");
    if (pibpercapita1>pibpercapita2) {
        printf("Carta 1 - %s: %.2f\n",nome1,pibpercapita1);
        printf("Carta 2 - %s: %.2f\n",nome2,pibpercapita2);
        printf("Carta 1 (%s) venceu!\n",nome1);
    } else {
        printf("Carta 1 - %s: %.2f\n",nome1,pibpercapita1);
        printf("Carta 2 - %s: %.2f\n",nome2,pibpercapita2);
        printf("Carta 2 (%s) venceu!\n",nome2);

    }
        printf("\n");


    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}