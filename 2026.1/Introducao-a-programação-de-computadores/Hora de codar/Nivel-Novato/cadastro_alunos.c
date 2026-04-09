/*
  Projeto: Hora de Codar - Nível Novato
  Objetivo: Sistema de Cadastro de Alunos (Entrada e Saída de Dados)
  Estudante: Izabelle Casagrande
  Data: Abril/2026
*/
#include <stdio.h>

int main() {

//Declaração de variaveis
int idade,matricula;
float altura;
char nome [50];

//Entrada de dados do usuário
printf("******************************\n");
printf("      ESCOLA MUNDO LIVRE      \n");
printf("******************************\n");
printf("Informe sua matricula: ");
scanf("%d",&matricula);

printf("Informe sua idade: ");
scanf("%d",&idade);

printf("Informe seu nome: ");
scanf("%s",nome);

printf("Informe sua altura: ");
scanf("%f",&altura);
printf("-----------------------------\n");

//Saída de dados digitados pelo usuário
printf("Aluno: %s \n",nome);
printf("Matricula: %d\n",matricula);
printf("Idade: %d\n",idade);
printf("Altura: %.2f\n",altura);
printf("******************************\n");
return 0;
}