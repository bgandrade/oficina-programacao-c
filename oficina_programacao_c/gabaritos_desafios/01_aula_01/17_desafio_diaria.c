#include <stdio.h>

int main(void)
{
    // Este gabarito calcula quanto uma pessoa vai receber por diarias.
    // O exercicio reforca o uso de int, float e uma conta simples.

    int dias_trabalhados;
    float valor_diaria;
    float total_receber;

    printf("Quantos dias foram trabalhados? ");
    scanf("%d", &dias_trabalhados);

    printf("Qual e o valor da diaria? ");
    scanf("%f", &valor_diaria);

    // O total a receber e o numero de dias multiplicado pelo valor da diaria.
    total_receber = dias_trabalhados * valor_diaria;

    printf("\nResumo do trabalho:\n");
    printf("Dias trabalhados: %d\n", dias_trabalhados);
    printf("Valor da diaria: R$ %.2f\n", valor_diaria);
    printf("Total a receber: R$ %.2f\n", total_receber);

    return 0;
}
