#include <stdio.h>

int main(void)
{
    // Vamos declarar duas variáveis.
    // "int" guarda número inteiro.
    // "float" guarda número com casas decimais.
    int idade;
    float altura;

    // Antes de usar scanf, é uma boa prática explicar ao usuário o que ele deve digitar.
    printf("Digite sua idade em anos: ");

    // scanf lê o valor digitado e o guarda na variável idade.
    // %d significa "ler um número inteiro".
    // O & entrega ao scanf o local onde a variável está guardada.
    scanf("%d", &idade);

    printf("Digite sua altura em metros, por exemplo 1.75: ");

    // %f significa "ler um número decimal".
    scanf("%f", &altura);

    // Agora vamos mostrar os valores lidos.
    // Quando queremos imprimir o valor de uma variável, usamos um formato.
    // %d mostra o valor de um int.
    // %.2f mostra o valor de um float com 2 casas decimais.
    printf("\nResumo dos dados digitados:\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    // Observe a diferença:
    // - nas mensagens fixas usamos texto entre aspas
    // - para mostrar o valor da variável, colocamos o formato e depois a variável

    return 0;
}
