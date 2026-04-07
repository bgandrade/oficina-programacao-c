#include <stdio.h>

int main(void)
{
    // Este gabarito calcula uma conta de luz simplificada.
    // A tarifa muda de acordo com o consumo informado.

    float consumo_kwh;
    float tarifa;
    float valor_total;

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo_kwh);

    if (consumo_kwh <= 100)
    {
        tarifa = 0.60f;
    }
    else
    {
        tarifa = 0.75f;
    }

    valor_total = consumo_kwh * tarifa;

    printf("Tarifa aplicada: R$ %.2f por kWh\n", tarifa);
    printf("Valor total da conta: R$ %.2f\n", valor_total);

    return 0;
}
