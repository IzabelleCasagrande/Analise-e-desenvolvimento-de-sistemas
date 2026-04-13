#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1,codigo1[10],nome1[50],estado2,codigo2[10],nome2[50];
  int populacao1,turistico1,populacao2,turistico2;
  float area1,pib1,area2,pib2;
  double densidade1,pibpercapita1,densidade2,pibpercapita2;
  
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
  scanf("%d",&populacao1);
  printf("Digite a área: ");
  scanf("%f",&area1);
  printf("Digite o PIB: ");
  scanf("%f",&pib1);
  printf("Digite a quantidade de pontos turíssticos: ");
  scanf("%d",&turistico1);

  //Leitura de dados da segunda carta.
  printf("Vamos cadastrar a segunda carta!\n");
  printf("Insira uma letra de A a H: ");
  scanf(" %c",&estado2);
  printf("Digite o código da carta: ");
  scanf("%s",codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s",nome2);
  printf("Digite a população: ");
  scanf("%d",&populacao2);
  printf("Digite a área: ");
  scanf("%f",&area2);
  printf("Digite o PIB: ");
  scanf("%f",&pib2);
  printf("Digite a quantidade de pontos turíssticos: ");
  scanf("%d",&turistico2);

  // Área para calculo da densidade populacional e pib per capita das duas cartas
  densidade1= (double) populacao1/area1;
  densidade2= (double) populacao2/area2;

  //Área para calculo do PIB per Capita
  pibpercapita1= (double) (pib1*1000000000)/populacao1;
  pibpercapita2= (double) (pib2*1000000000)/populacao2;
    
  // Área para exibição dos dados da cidade
  //Exibição das informações digitadas pelo usuario para os dados da primeira carta
  printf("CARTA 1:\n");
  printf("Estado: %c \n",estado1);
  printf("Código: %s \n",codigo1);
  printf("Nome da Cidade: %s \n",nome1);
  printf("População: %d \n",populacao1);
  printf("Área: %.2f km²\n",area1);
  printf("PIB: %.2f bilhões de reais\n",pib1);
  printf("Número de pontos turístios: %d \n",turistico1);
  printf("Densidade Populacional: %.2f hab/km² \n",densidade1);
  printf("PIB per Capita: %.2f reais \n",pibpercapita1);
  
  //Exibição das informações digitadas pelo usuario para os dados da segunda carta
  printf("CARTA 2:\n");
  printf("Estado: %c \n",estado2);
  printf("Código: %s \n",codigo2);
  printf("Nome da Cidade: %s \n",nome2);
  printf("População: %d \n",populacao2);
  printf("Área: %.2f km²\n",area2);
  printf("PIB: %.2f bilhões de reais\n",pib2);
  printf("Número de pontos turístios: %d \n",turistico2);
  printf("Densidade Populacional: %.2f hab/km² \n",densidade2);
  printf("PIB per Capita: %.2f reais \n",pibpercapita2);
  
return 0;
} 