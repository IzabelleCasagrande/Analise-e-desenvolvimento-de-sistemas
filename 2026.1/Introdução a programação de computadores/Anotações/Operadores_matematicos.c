/*OPERADORES MATEMATICOS:
-Operadores aritmeticos: 
Soma (+)
Subtração (-)
Multiplicação(*)
Divisão(/)*/
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt_BR.UTF-8");

    int x,y,n1,n2,soma,subtracao,divisao,multiplicacao,resultado; 
    
    printf("Entre com o número 1: \n");
    scanf("%d",&n1);
    printf("Entre com o número 2: \n");
    scanf("%d",&n2);
    printf("Operadores aritmeticos: \n");
    //Operação soma
    soma=n1+n2;
    
    //Operação subtração
    subtracao=n1-n2;
    
    //Operação multiplicacao
    multiplicacao=n1*n2;
    
    //Operação divisao
    divisao=n1/n2;

    printf("A soma é: %d \n",soma);
    printf("A subtração é: %d \n",subtracao);
    printf("A divisao é: %.2f \n",divisao);
    printf("A multiplicação é: %.2f \n",multiplicacao);

    /*-Operadores de atribuição:
    Atribuição Simples (=)
    Atribuição com soma(+=)
    Atribuição com subtração(-=)
    Atribuição com multiplicação(*=)
    Atribuição com divisão (/=)*/

    printf("Operadores de atribuição:");
    resultado = 10;
    printf("Resultado %d\n",resultado);

    //resultado=resultado+20
    resultado+=20;
    printf("Resultado %d\n",resultado);

    //resultado=resultado-n1
    resultado-=n1;
    printf("Resultado %d\n",resultado);

    //resultado=resultado*5
    resultado*=5;
    printf("Resultado %d\n",resultado); 

    //resultado=resultado/2
    resultado/=2;
    printf("Resultado %d\n",resultado); 

    /*Operadores de incremento e decremento
    Incremento (++)
    Decremento(--)
    Pre Incremento(++a)
    Pos Incremento(a++)
    Pre Decremento(--a)
    Pos Decremento(a--)
    Muito utilizado em loops, quando voce precisa aumentar o valor da variavel
    de uma forma repetida(como nos exercicios de contador do guanabara. )
    */

    printf("Operadores de incremento e decremento:\b");
    printf("Antes incremento %d\n",n1);

    //n1=n1+1
    //n1+=1
    n1++;
    printf("Após incremento %d\n",n1);

    //n1=n1-1
    //n1-=1
    n1--;
    printf("Após o decremento %d\n",n1);

    //Pós-incremento:use primeiro, mude depois.
    x=1;
    y=x++;
    printf("O y vai receber %d e só depois recebe %d\n",y,x);  
    //y=1 e x=2

    //Pré-incremento:mude primeiro, use depois.
    x=10;
    y=++x;
    printf("O X primeiro vira %d e depois o y recebe %d\n",x,y);
    return 0;
}