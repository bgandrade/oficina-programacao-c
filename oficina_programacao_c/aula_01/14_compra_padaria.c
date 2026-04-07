#include <stdio.h>

int main(void)
{
    // Neste exemplo, vamos simular uma compra simples em uma padaria.
    // O objetivo é praticar entrada de dados, variáveis e multiplicação.

    int quantidade_paes;
    float preco_unitario;
    float total;

    printf("Quantos pães franceses foram comprados? ");
    scanf("%d", &quantidade_paes);

    printf("Qual é o preço de cada pão? ");
    scanf("%f", &preco_unitario);

    // Aqui fazemos a conta principal do programa.
    // O valor total será:
    // quantidade de pães x preço de cada pão
    total = quantidade_paes * preco_unitario;

    printf("\nResumo da compra:\n");
    printf("Quantidade de pães: %d\n", quantidade_paes);
    printf("Preço unitário: R$ %.2f\n", preco_unitario);
    printf("Total a pagar: R$ %.2f\n", total);

    // Repare em algo importante:
    // O computador não "adivinha" a conta.
    // Nós precisamos declarar as variáveis, ler os dados e depois escrever a fórmula.

    return 0;
}
