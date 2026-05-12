#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
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

  int resultadopopulacao,resultadoarea,resultadopib,resultadoturistico,resultadodensidade,resultadopibpercapita,resultadosuperpoder;

  // Área para entrada de dados
  //cabeçalho para interação com o usuario.
  printf("SUPER TRUNFO\n");
  printf("Vamos cadastrar nossa primeira carta!\n");

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
  printf("Digite a quantidade de pontos turíssticos: ");
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
  printf("Digite a quantidade de pontos turíssticos:");
  scanf("%d",&turistico2);
  printf("\n");

  // Área para calculo da densidade populacional e pib per capita das duas cartas
  densidade1= (float) populacao1/area1;
  densidade2= (float) populacao2/area2;

  //Área para calculo do PIB per Capita
  pibpercapita1= (float) (pib1*1000000000.0f)/ (float)populacao1;
  pibpercapita2= (float) (pib2*1000000000.0f)/ (float)populacao2;
    
  // Área para exibição dos dados da cidade
  //Exibição das informações digitadas pelo usuario para os dados da primeira carta
  printf("CARTA 1:\n");
  printf("Estado: %c \n",estado1);
  printf("Código: %s \n",codigo1);
  printf("Nome da Cidade: %s \n",nome1);
  printf("População: %lu \n",populacao1);
  printf("Área: %.2f km²\n",area1);
  printf("PIB: %.2f bilhões de reais\n",pib1);
  printf("Número de pontos turístios: %d \n",turistico1);
  printf("Densidade Populacional: %.2f hab/km² \n",densidade1);
  printf("PIB per Capita: %.2f reais \n",pibpercapita1);
  printf("\n");
  
  //Exibição das informações digitadas pelo usuario para os dados da segunda carta
  printf("CARTA 2:\n");
  printf("Estado: %c \n",estado2);
  printf("Código: %s \n",codigo2);
  printf("Nome da Cidade: %s \n",nome2);
  printf("População: %lu \n",populacao2);
  printf("Área: %.2f km²\n",area2);
  printf("PIB: %.2f bilhões de reais\n",pib2);
  printf("Número de pontos turístios: %d \n",turistico2);
  printf("Densidade Populacional: %.2f hab/km² \n",densidade2);
  printf("PIB per Capita: %.2f reais \n",pibpercapita2);
  printf("\n");
  // Area para calculo do inverso da densidade
  inverso1 = 1.0f/densidade1;
  inverso2 = 1.0f/densidade2;

  //Area para calculo do super poder das cartas
  superPoder1 = ((float)populacao1 + area1 + (pib1*1000000000) + (float)turistico1 + pibpercapita1 + inverso1);
  superPoder2 = ((float)populacao2 + area2 + (pib2*1000000000) + (float)turistico2 + pibpercapita2 + inverso2);

  //Area para comparação das cartas
  printf("Comparação de cartas:\n");
  resultadopopulacao = (populacao1 > populacao2);
  printf("População: Carta 1 venceu (%d) \n",resultadopopulacao);
  resultadoarea = (area1 > area2);
  printf("Área: Carta 1 venceu (%d) \n",resultadoarea);
  resultadopib = (pib1 > pib2);
  printf("PIB: Carta 1 venceu (%d) \n",resultadopib);
  resultadoturistico = (turistico1 > turistico2);
  printf("Pontos Turísticos: Carta 1 venceu (%d) \n",resultadoturistico);
  resultadodensidade = (densidade1 < densidade2);
  printf("Densidade Populacional: Carta 2 venceu (%d) \n",resultadodensidade);
  resultadopibpercapita = (pibpercapita1 > pibpercapita2);
  printf("PIB per Capita: Carta 1 venceu (%d) \n",resultadopibpercapita);
  resultadosuperpoder = (superPoder1 > superPoder2);
  printf("Super Poder: Carta 1 venceu (%d) \n",resultadosuperpoder);

return 0;
} 