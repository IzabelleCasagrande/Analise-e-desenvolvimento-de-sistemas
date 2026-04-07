/*A solução estruturada é essencial para escrever programas
claros e organizados.
MODULARIDADE: Dividir um problema grande em subproblemas menores.
Isso além de facilitar o manejamento do problema, facilita também a correção
de erros.
Exemplo: sistema para calcular a média de temperaturas de uma semana:
-Entrada de dados: coletar as temperaturas diárias.
-Saída de dados: exibir a média das temperaturas.
Processamento de dados: calcular a média das temperaturas.
A modularidade dividi um problema grande e complexo em problemas menores
e mais manejaveis. Envolve escrever funções ou módulos que realizam tarefas
especificas, tornando o código mais reutilizável e fácil de entender.
Cada módulo deve ter uma unica responsabilidade.
Void = função utilizada quando não precisamos devolver um numero nem nada, por exemplo
num cabeçalho, nossa função será void pois apenas mostra informações ao usuario.
Vamos ver agora, um código com exemplo de modularidade.
*/

#include <stdio.h>
#include <locale.h>

//Espaço dedicado a declaração de variaveis
float t1,t2,media;

//Função genérica para entrada de dados
void entradaDados() {
    //Toda a interação de entrada de dados com o usuario acontece dentro dessa chave.
    printf("Informe a 1ª temperatura: ");
    scanf("%f",&t1);
    printf("Informe a 2ª temperatura: ");
    scanf("%f",&t2);
}

//Função genérica para calculo da media
float calcularMedia() {
    //Aqui nós usamos o float pois a função inclui um calculo matematico.
    media=(t1+t2)/2;
    return media;
}

//Função genérica para exibir dados
void exibirMedia() {
    printf("A média entre a temperatura %.2f e %.2f é: %.2f",t1,t2,media);
}

/*Após dividir um grande problema em outros 3 menores, podemos finalmente
estruturar o código de forma mais limpa, chamando apenas cada uma das funções que
definimos anteriormente.*/

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    entradaDados();
    media = calcularMedia();
    exibirMedia();

    return 0;
}

/*Nesse exemplo, temos tres funções distintas para entrada, processamento e
saída de dados, cada uma com uma responsabilidade clara. Com a modularidade, alterar
as funções de entrada, processamento e saída fica muito mais fácil, já que essa alteração
será feita no bloco especifico. Alem disso as funções de entrada e saída de dados, podem ser
reutilizadas em outros programas ou contextos.*/

/*ABSTRAÇÃO: Permite focar no que é realmente importante, ignorando os detalhes irrelevantes.
Isso é importante para lidar com a complexidade. Ao invés de se preocupar com os detalhes de como 
é feita a entrada e a saída de dados, é possível criar uma função de entradaDados que abstrai esse processo.
Assim, se for preciso alterar a forma como os dados são coletados, basta alterar a função, mantendo o código
sem alterações.*/