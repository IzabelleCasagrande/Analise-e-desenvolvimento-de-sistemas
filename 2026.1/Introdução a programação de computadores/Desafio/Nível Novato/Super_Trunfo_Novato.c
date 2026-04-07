/*Criar um programa em C que permita ao usuário inserir os dados de duas
 cartas do Super Trunfo.
 Para cada carta, o usuário deverá fornecer as seguintes informações:
 Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 População: O número de habitantes da cidade. Tipo: int
 Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 PIB: O Produto Interno Bruto da cidade. Tipo: float
 Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/

 #include <stdio.h>

int main() {
    // Declaração de variaveis
    char estado1,codigo1[10],nome1[50],estado2,codigo2[10],nome2[50];
    int populacao1,turisticos1,populacao2,turisticos2;
    float area1,pib1,area2,pib2;

    //Criação de cabeçalho para facilitar a visualização
    printf("******************************\n");
    printf("         SUPER TRUNFO         \n");
    printf("******************************\n");
    printf("         CARTA 1\n");

    //Leitura dos dados da carta 1

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area total: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("-------------------------------\n");
    printf("            CARTA 2            \n");

    //Leitura dos dados da carta 2

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area total: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turisticos2);

    //Mostrando ao usuario os dados digitados, com uma tentativa de melhora no visual para o usuário.
    printf("  _____________________________ \n");
    printf("|                              |\n");
    printf("|            CARTA 1           |\n");
    printf("| ____________________________ |\n");
    printf("| Estado: %c                   \n",estado1);
    printf("| Codigo da carta: %s          \n",codigo1);
    printf("| Nome: %s                     \n",nome1);
    printf("| Populacao: %d                \n",populacao1);
    printf("| Area: %f                     \n",area1);
    printf("| PIB: %f                      \n",pib1);
    printf("| Pontos Turisticos: %d        \n",turisticos1);
    printf("| ____________________________ |\n");

    printf("  _____________________________ \n");
    printf("|                              |\n");
    printf("|            CARTA 2           |\n");
    printf("| ____________________________ |\n");
    printf("| Estado: %c                   \n",estado2);
    printf("| Codigo da carta: %s          \n",codigo2);
    printf("| Nome: %s                     \n",nome2);
    printf("| Populacao: %d                \n",populacao2);
    printf("| Area: %f                     \n",area2);
    printf("| PIB: %f                      \n",pib2);
    printf("| Pontos Turisticos: %d        \n",turisticos2);
    printf("| ____________________________ |\n");

    return 0;
}