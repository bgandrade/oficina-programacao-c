#include <stdio.h>

int main(void)
{
    // Neste gabarito, vamos aplicar desconto conforme a forma de pagamento.
    // Os codigos usados sao:
    // 1 = Pix
    // 2 = Dinheiro
    // 3 = Cartao

    float valor_compra;
    float valor_final;
    int forma_pagamento;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Forma de pagamento (1=Pix, 2=Dinheiro, 3=Cartao): ");
    scanf("%d", &forma_pagamento);

    valor_final = valor_compra;

    if (forma_pagamento == 1)
    {
        valor_final = valor_compra * 0.92;
        printf("Pagamento via Pix.\n");
    }
    else if (forma_pagamento == 2)
    {
        valor_final = valor_compra * 0.95;
        printf("Pagamento em dinheiro.\n");
    }
    else if (forma_pagamento == 3)
    {
        printf("Pagamento no cartao.\n");
    }
    else
    {
        printf("Forma de pagamento invalida.\n");
        return 0;
    }

    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}
