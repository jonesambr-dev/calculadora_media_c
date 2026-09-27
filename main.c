#include <stdio.h>

int main(void) {
    float nota1, nota2, nota3;
    float mediageral;
    float nota3necessaria;

    // Entrada da primeira nota
    do {
        printf("Digite a nota do primeiro trimestre (peso 3): ");
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    // Entrada da segunda nota
    do {
        printf("Digite a nota do segundo trimestre (peso 3): ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
        }
    } while (nota2 < 0 || nota2 > 10);

    // Media provisoria considerando os pesos totais: 3 + 3 + 4 = 10
    // A terceira nota ainda nao foi informada.
    mediageral = (nota1 * 3.0 + nota2 * 3.0) / 10.0;

    printf("\nMedia geral provisoria: %.2f\n", mediageral);

    // Calcula a nota necessaria no terceiro trimestre para media 6
    nota3necessaria = (60.0 - nota1 * 3.0 - nota2 * 3.0) / 4.0;

    if (nota3necessaria <= 0) {
        printf("O aluno ja atingiu a media 6.\n");
    } else if (nota3necessaria <= 10) {
        printf("Nota necessaria no terceiro trimestre: %.2f\n",
               nota3necessaria);
    } else {
        printf("Mesmo tirando 10, o aluno nao atingira a media 6.\n");
    }

    // Entrada da terceira nota
    do {
        printf("\nDigite a nota do terceiro trimestre (peso 4): ");
        scanf("%f", &nota3);

        if (nota3 < 0 || nota3 > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
        }
    } while (nota3 < 0 || nota3 > 10);

    // Media geral final
    mediageral =
        (nota1 * 3.0 + nota2 * 3.0 + nota3 * 4.0) / 10.0;

    printf("\nMedia geral final: %.2f\n", mediageral);

    if (mediageral >= 6.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
