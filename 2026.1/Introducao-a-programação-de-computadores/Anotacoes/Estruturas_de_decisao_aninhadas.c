#include <stdio.h>

int main() {
    /* programa que verifica se uma pessoa está qualificada para um
    desconto especial com base na idade e na renda mensal.
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
    uma renda mensal abaixo de 2000

    int idade;
    float renda;

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    if (idade>=60 || idade<=18) {
        if (renda<2000){
        printf("Você tem direito ao desconto!\n");
        } else {
            printf("Você não tem direito ao desconto devido à renda!\n");
        }
        
    }else {
        printf("Você não atende aos critérios devido à idade!\n");
    }
    return 0; 
}*/

    /*A primeira condição idade do usuário está entre 18 e 65 anos.
      A segunda condição se a renda do usuário é menor que R$3000,00.
      A terceira condição verifica se o número de dependentes é maior que 2

      int idade, dependentes;
      float renda;

      printf("Digite a sua idade:");
      scanf("%d", &idade);
      printf("Digite a sua renda mensal: R$");
      scanf("%f", &renda);
      printf("Digite o número de dependentes: ");
      scanf("%d", &dependentes);
        
        if (idade>=18 && idade<65) {
                if (renda<3000) {
                    if (dependentes>2) {
                        printf("Você atende a todos os critérios");
                    }else {
                        printf("Você não atende ao critério de dependentes!\n");
                    }
                }else{
                        printf("Você não atende ao critério de renda!\n");
                }
        }else{
            printf("Você não atende ao critério de idade!\n");
        }*/

      int numero;
      
      printf("Digite um número: ");
      scanf("%d", &numero);

      if (numero>0){
        if (numero%2==0) {
            printf("O numero é par!");
        }else {
            printf("O numero é impar!");
        }
      }else if (numero == 0){
        printf("o numero é zero");
      }else {
        printf("O numero é negativo!");
      }
    }

      

