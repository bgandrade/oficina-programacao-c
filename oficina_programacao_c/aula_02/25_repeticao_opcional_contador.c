#include <stdio.h>

int main(void)
{
    // Este exemplo é opcional.
    // Ele mostra a ideia de repetição usando for.
    // O programa vai contar de 1 até 10.

    int i;

    // Estrutura do for:
    // 1. i = 1  -> valor inicial
    // 2. i <= 10 -> condição para continuar repetindo
    // 3. i++ -> soma 1 em i ao final de cada repetição
    for (i = 1; i <= 10; i++)
    {
        printf("Número: %d\n", i);
    }

    // Este exemplo ajuda o aluno a perceber que o computador consegue repetir
    // a mesma tarefa várias vezes sem precisarmos escrever 10 comandos iguais.

    return 0;
}
