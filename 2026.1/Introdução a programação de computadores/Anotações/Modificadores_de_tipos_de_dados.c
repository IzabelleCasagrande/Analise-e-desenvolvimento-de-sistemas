/*Os modificadores permitem que voce controle da melhor forma
como os dados serão manipulados. Os 4 tipos mais usados na 
linguagem C são:
-unsigned: é utilizado par declarar variaveis que podem armazenar
apenas valores positivos.Muito util quando sabemos que aquela variavel
nao armazenara numeros negativos. Como os numeros negativos não são usados 
aqui, os valores positivos são dobrados, então posso armazenar valores maiores.
isso ocorre porque no signed, o simbolo de menos, ocupa o espaço de um numero.
-signed: indica que a variavel trabalha com valores positivos e
negativos, geralmente é o padrão.
-long: ele vai ser utilizado para aumentar a capacidade de armazenamento em variaveis
como int e double permitindo que valores maiores sejam armazenados e mais precisos. aqui
nos usaremos especificadores de formatos diferentes, no long sera o %ld e no long long sera
o %lld.
long long int: tem o dobro do dobro.
-short

Uma das vantagens do C é a portabilidade mas ainda assim, pode apresentar erros, dependendo do
sistema ou compilador utilizado. No exemplo mostrado pelo professor o long long int não consegue
alterar para o valor certo no VS Code, apenas no github. Já na minha maquina, quando rodo o mesmo 
programa o valor de long long int é mostrado de forma correta. São detalhes como esse que pregam 
pegadinhas nos programadores, pois e necessario pesquisar e entender como utilizar certas funções de
maneira certa e que seja multiplataforma.*/

#include <stdio.h>

int main() {

    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    int numeroNormal = 2147483647;
    long long int numeroGrande = 2147483647;

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long long int numeroGrandenovo = 4000000000;
    int numero = 4000000000;

    short int numeroPequeno = 32767; //Valor maximo do short em int
    
    printf("int varia de: -2.147.483.648 a 2.147.483.647\n");
    printf("unsigned int varia de: 0 a 4.294.967.295\n");
    printf("char -128 a 127\n");
    printf("unsigned char 0 a 255\n");
    printf("\n");
    
    printf("Numero com sinal: %d\n",numeroSinal);
    printf("Numero sem sinal: %u\n",numeroSemSinal);
    
    printf("\n");
    printf("Numero regular (int): %d\n",numeroNormal);
    printf("Numero grande (long int): %ld\n",numeroGrande);

    numeroGrande = 2147483648; //Valor maior que o maximo de int
    printf("Numero grande atualizado (long int): %ld\n",numeroGrande);
    printf("Numero grande atualizado (long long int): %lld\n",numeroGrande);
    /*Existe um comando que é chamado sizeof, nessa instrução sizeof eu coloco
    o tipo da variavel que eu quero saber o tamanho e ela vai imprimir para o usuario, o valor
    da variavel*/

    printf("\n");
    printf("Tamanho de int: %u bytes\n",sizeof(int));
    printf("Tamanho de long int: %u bytes\n",sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n",sizeof(long long int));
    printf("Tamanho de double: %u bytes\n",sizeof(double));
    printf("Tamanho de long double: %u bytes\n",sizeof(long double));
    
    /*Nessa parte do exemplo, o vscode não é capaz de fazer a impressão do numero de forma correta. */
    printf("\n");
    printf("Numero preciso (double): %.15f\n",numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n",numeroMuitoPreciso);

    printf("\n");
    printf("Número positivo grande: %lu\n",numeroGrandePositivo);
    printf("Número positivo: %u\n",numeroPositivo);
    printf("Número grande: %lld\n",numeroGrandenovo);
    printf("Número: %d\n",numero);

    /*O modificador short tem como objetivo poupar memoria, ele é utilizado quando se sabe
    que o numero que sera trabalhado é pequeno. Era muito utilizado antigamente pois os computadores tinham
    limitações de memória. O c tambem pode ser utilizado em sistemas embarcados como uma televisão e etc e em
    casos assim, a memoria sera uma limitação. */

    printf("\n");
    printf("Numero pequeno (short int): %d\n",numeroPequeno);

    numeroPequeno = 32768; //Valor maior que o maximo de short int
    printf("Numero pequeno atualizado (short int): %d\n",numeroPequeno);

    printf("\n*** Tamanho das variáveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int: %lu B\n",sizeof(int),sizeof(short int),sizeof(long int));
    printf("Float: %lu B- Double: %lu B - Long double: %lu B\n",sizeof(float),sizeof(double),sizeof(long double));
    
    //Escolha o tipo de dado apropriado;
    //Verifique a compatibilidade de tipos;
    //Use especificadores de formato corretos;
    //Verifique o tamanho do tipo de dados para o ambiente;
    //Considere o ambiente de desenvolvimento;
    return 0;
}   