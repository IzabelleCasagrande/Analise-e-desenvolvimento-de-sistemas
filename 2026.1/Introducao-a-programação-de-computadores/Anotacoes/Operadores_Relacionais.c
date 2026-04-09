/*Em c quando comparamos valores de tipos diferentes, é feita uma conversão implicita
de tipos, para que a comparação seja realizada.*/

#include <stdio.h>

int main () {
    int a=10;
    int b=20;
    
    int x=5;
    float y=5.0;

    char c ='a'; /* Quando comparamos variaveis do tipo char a conversão implicita
    acaba não funcionando corretamente, pois quando declaro char c = 'a' o verdadeiro
    valor guardado na gaveta de char, não sera a nem c e sim o valor correspondente ao a
    na tabela ASCII */

    float n1 =10.2;
    int n2 = 10;

    printf("a > b: %d \n",a>b);
    printf("a < b: %d \n",a<b);
    printf("a == b: %d \n",a==b);
    printf("a != b: %d \n",a!=b);
    printf("a >= b: %d \n",a>=b);
    printf("a <= b: %d \n\n",a<=b);
    
    printf("x >= y: %d \n",x>=y);
    printf("x == y: %d \n",x==y);
    printf("x != y: %d \n\n",x!=y);

    printf("x >= c: %d \n",x>=c);
    printf("O valor ASCII de %c é %d: \n",c,c);

    /*Conversão explitica (casting): como visto anteriormente a conversão
    explicita é utilizada quando queremos forçar uma converão, no exemplo abaixo
    queremos comparar apenas o numero inteiro, ignorando a casa decimal, para isso
    utilizamos o casting */

    printf("n1 > n2: %d \n",(int)n1>n2);
    printf("n1 == n2: %d \n",(int)n1==n2);

    return 0;
}