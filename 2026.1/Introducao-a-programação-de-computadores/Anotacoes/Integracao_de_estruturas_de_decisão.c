/*O objetivo é criar um programa de gerenciamento de estudantes para calcular médias e determinar o status.
*/

#include <stdio.h>

int main () {

    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("[1] Calcular Média\n");
    printf("[2] Determinar Status\n");
    printf("[3] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a Média\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        //Testar a condição se a nota é>=0 e <=10.
        if (((nota1>=0) && (nota1<=10)) && ((nota2>=0) && (nota2<=10))) {
            media = (nota1+nota2)/2;
            printf("A média é: %.2f\n", media);
        }else {
            printf("Entrada incorreta. As notas devem ser entre 0 e 10. \n");
        }
        break;
    case 2:
        printf("Determinar o Status\n");
        printf("Digite a média do estudante: ");
        scanf("%f",&media);
        media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");
        break;
    case 3:
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número de 1 a 3.\n");
    }
    return 0;
}