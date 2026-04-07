#include <stdio.h>

int main(void)
{
    // Neste gabarito, vamos calcular o valor de uma compra feita na feira.
    // O aluno pratica leitura de dados, uso de variaveis e multiplicacao.

    float quantidade_quilos;
    float preco_por_quilo;
    float valor_final;

    printf("Quantos quilos foram comprados? ");
    scanf("%f", &quantidade_quilos);

    printf("Qual e o preco por quilo? ");
    scanf("%f", &preco_por_quilo);

    // O valor final da compra e a quantidade multiplicada pelo preco.
    valor_final = quantidade_quilos * preco_por_quilo;

    printf("\nResumo da compra:\n");
    printf("Quantidade: %.2f kg\n", quantidade_quilos);
    printf("Preco por quilo: R$ %.2f\n", preco_por_quilo);
    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}
