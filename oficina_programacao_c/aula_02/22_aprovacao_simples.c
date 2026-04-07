#include <stdio.h>

int main(void)
{
    // Este exemplo mostra a forma mais simples de decisão em C.
    // O programa vai ler uma nota e dizer se o aluno foi aprovado.

    float nota;

    printf("Digite a nota final do aluno: ");
    scanf("%f", &nota);

    // A condição fica dentro dos parênteses do if.
    // Se a nota for maior ou igual a 6, o bloco será executado.
    if (nota >= 6.0)
    {
        printf("Situação: aprovado\n");
    }

    // Se a nota for menor que 6, nada acontece aqui.
    // Isso mostra que o if sozinho executa o bloco apenas quando a condição é verdadeira.

    return 0;
}
