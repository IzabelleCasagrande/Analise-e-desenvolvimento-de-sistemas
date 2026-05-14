#include <stdio.h>

int main() {

    int a=10, b=-5, c=3, d=-2, e=1;

    printf("Exemplo para operador lógico AND (&&)\n");

    if (a>0 && b>0) 
    {   
        printf("Os dois números são positivos\n");
    } else{
        printf("Pelo menos um dos números é negativo\n");
    }

    printf("Exemplo para operador lógico OR (||)\n");

    if (c>0 || d>0) 
    {   
        printf("Pelo menos um dos números é positivo\n");
    } else{
        printf("Os dois números são negativos\n");
    }
    
    printf("Exemplo para operador lógico NOT (!)\n");

    if (!e)  { //(!(a>0))
        printf("A variável e é 0\n");
    } else{
        printf("A variável é diferente de zero\n");
    }
    printf("PRECEDÊNCIA DOS OPERADORES LÓGICOS\n");

    printf(" ===================================================\n");
    printf("|      Operadores       |       Associatividade    |\n");
    printf(" ===================================================\n");
    printf("() []                   | esquerda para direita    \n");
    printf("! - ++ --               | direita para a esquerda  \n");
    printf("* / %                   | esquerda para direita    \n");
    printf("+ -                     | esquerda para direita    \n");
    printf("< <= >  >=              | esquerda para direita    \n");
    printf("== !=                   | esquerda para direita    \n");
    printf("&&                      | esquerda para direita    \n"); 
    printf("||                      | esquerda para direita    \n");
    printf("= += -= *= /= %=        | direita para a esquerda  \n");
    printf(",                       | esquerda para direita    \n");
    printf(" ==================================================\n");
    
    //a>0 => verdadeiro
    //b<0 => verdadeiro
    //verdadeiro && verdadeiro => verdadeiro
    //verdadeiro || c==0
    //verdadeiro || falso => verdadeiro

    if (a>0 && b<0 || c==0) {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }
    return 0;
}