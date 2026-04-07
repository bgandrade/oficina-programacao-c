#include <stdio.h>

int main(void)
{
    // Vamos simular uma lanchonete com formas de pagamento diferentes.
    // O programa vai ler o valor da compra e um código da forma de pagamento.
    //
    // Código 1: Pix -> 10% de desconto
    // Código 2: Dinheiro -> 5% de desconto
    // Código 3: Cartão -> sem desconto

    float valor_compra;
    float valor_final;
    int forma_pagamento;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Forma de pagamento (1=Pix, 2=Dinheiro, 3=Cartão): ");
    scanf("%d", &forma_pagamento);

    // Começamos supondo que não há desconto.
    // Depois, se alguma condição for atendida, mudamos o valor final.
    valor_final = valor_compra;

    if (forma_pagamento == 1)
    {
        // 10 por cento de desconto significa pagar 90 por cento do valor.
        valor_final = valor_compra * 0.90;
        printf("Pagamento via Pix.\n");
    }
    else if (forma_pagamento == 2)
    {
        valor_final = valor_compra * 0.95;
        printf("Pagamento em dinheiro.\n");
    }
    else if (forma_pagamento == 3)
    {
        printf("Pagamento no cartão.\n");
    }
    else
    {
        printf("Código de pagamento inválido.\n");
        return 0;
    }

    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}
