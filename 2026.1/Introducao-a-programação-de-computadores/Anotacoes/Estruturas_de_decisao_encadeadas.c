#include <stdio.h>

int main() {

/*    int condicao1, condicao2;

    //estrutura aninhada
    if(condicao1){
        if (condicao2) {
            //Código a ser executado se condicao 1 e 2 forem verdadeiras
        }
    }

    //estrutura encadeada
    if (condicao1) {
        //Código a ser executado se condicao 1 for verdadeira
    } else if (condicao2) {
        //Código a ser executado se condicao 1 for falsa e condicao 2 for verdadeira    
    } else {
        //Código a ser executado se condicao 1 e 2 forem falsas
    } */
   
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade<12) {
        printf("Você é uma criança\n");
    } else if (idade>=12 && idade<18) {
        printf("Você é um adolescente\n");
    } else if (idade>=18 && idade<60) {
        printf("Você é um adulto\n");
    } else {
        printf("Você é um idoso\n");
    }
    return 0;
}