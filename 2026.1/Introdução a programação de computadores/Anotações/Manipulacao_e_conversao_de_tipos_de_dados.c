#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"pt_BR.UTF-8");
    int a =10;
    float b=3;
    float soma = a + b;
    int diferenca = a - b;  
    int produto = a * b;
    float quociente = (float) a / b;
 //Conversão explicita utilizando casting
    printf("Soma: %f\n",soma);
    printf("Diferença: %d\n",diferenca);
    printf("Produto: %d\n",produto);
    printf("Quociente: %.2f\n",quociente);
    
    return 0;
}