/* Para testar as condições, vamos utilizar os operadores relacionais, alem dos operadores logicos 
(que serão introduzidos em outro momento). Quando a condição é executada sem as {} o compilador vai 
executar apenas a primeira linha após a condição.  */
#include <stdio.h>

int main() {

    int maca =76.0;
    int laranja = 78.0;
    
    if (maca>=laranja)
    {
        printf("Tem mais maça do que laranja");
    }
    else
    {
        printf("Tem mais laranja do que maça");
    }
    return 0;
}