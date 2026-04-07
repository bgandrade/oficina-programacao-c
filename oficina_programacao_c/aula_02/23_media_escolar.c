#include <stdio.h>

int main(void)
{
    // Neste exemplo, vamos combinar conta com decisão.
    // O programa lê duas notas, calcula a média e classifica o aluno.

    float nota1;
    float nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Primeiro fazemos a conta.
    media = (nota1 + nota2) / 2.0;

    printf("\nMédia final: %.2f\n", media);

    // Agora o programa toma uma decisão.
    // Repare na ordem:
    // 1. testa se a média é maior ou igual a 7
    // 2. se não for, testa se a média é maior ou igual a 5
    // 3. se nenhuma das anteriores for verdadeira, cai no else
    if (media >= 7.0)
    {
        printf("Situação: aprovado\n");
    }
    else if (media >= 5.0)
    {
        printf("Situação: recuperação\n");
    }
    else
    {
        printf("Situação: reprovado\n");
    }

    return 0;
}
