#include <stdio.h>

int main(void)
{
    // Este gabarito mostra a tabuada de um numero usando for.
    // Ele pode ser usado como apoio se a turma chegar ao tema de repeticao.

    int numero;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
