# Aula 1 - Introdução à programação em C

## Objetivo da aula

Ao final desta aula, a turma deve conseguir:

- entender o que é um algoritmo
- reconhecer a estrutura básica de um programa em C
- usar `printf` para mostrar mensagens
- usar `scanf` para ler dados
- declarar variáveis simples
- fazer contas básicas com valores digitados pelo usuário

## 1. O que é programar

Programar é escrever uma sequência de instruções para o computador seguir.
Essas instruções precisam ser claras, ordenadas e sem ambiguidade.

Um algoritmo é justamente essa sequência de passos para resolver um problema.

Exemplo fora do computador:

1. pegar um copo
2. abrir a garrafa
3. colocar água no copo
4. beber

Em programação, fazemos a mesma ideia, mas usando uma linguagem que o compilador
consiga entender.

## 2. O que é a linguagem C

C é uma linguagem de programação muito importante na história da computação.
Ela é bastante usada para ensinar fundamentos porque obriga o aluno a entender
bem a estrutura do programa e o fluxo de execução.

Nesta oficina, vamos usar apenas o básico necessário para:

- mostrar mensagens
- ler números
- guardar dados em variáveis
- fazer contas simples
- tomar decisões

## 3. Estrutura básica de um programa em C

Quase todo programa desta oficina vai ter uma forma parecida com esta:

```c
#include <stdio.h>

int main(void) {
    printf("Olá!\n");
    return 0;
}
```

### O que cada parte faz

- `#include <stdio.h>`: libera recursos de entrada e saída, como `printf` e `scanf`
- `int main(void)`: ponto de início do programa
- `{` e `}`: delimitam o bloco da função
- `printf(...)`: mostra algo na tela
- `;`: indica o fim de um comando
- `return 0;`: encerra o programa informando que terminou corretamente

## 4. Saída de dados com `printf`

Usamos `printf` para exibir textos e valores.

Exemplos:

```c
printf("Bom dia!\n");
printf("Hoje vamos aprender C.\n");
```

O `\n` significa quebra de linha.
Sem ele, a próxima mensagem pode aparecer na mesma linha.

## 5. Variáveis

Variável é um espaço na memória usado para guardar um valor.

Exemplos de tipos que vamos usar:

- `int`: números inteiros, como `10`, `25`, `100`
- `float`: números com parte decimal, como `7.5`, `10.99`, `3.14`

Exemplos:

```c
int idade;
float altura;
```

Também podemos guardar um valor logo na declaração:

```c
int quantidade = 3;
float preco = 5.50;
```

## 6. Entrada de dados com `scanf`

Usamos `scanf` para ler dados digitados pelo usuário.

Exemplos:

```c
scanf("%d", &idade);
scanf("%f", &altura);
```

### O que isso significa

- `%d`: lê um número inteiro
- `%f`: lê um número decimal
- `&idade`: entrega o endereço da variável para que o valor digitado seja guardado nela

Para iniciantes, o símbolo `&` pode parecer estranho. Nesta oficina, basta pensar assim:
"o `scanf` precisa saber exatamente onde deve guardar o valor lido".

## 7. Operações aritméticas básicas

Podemos usar:

- `+` para somar
- `-` para subtrair
- `*` para multiplicar
- `/` para dividir

Exemplo:

```c
float total;
total = preco * quantidade;
```

Primeiro o programa resolve a conta. Depois guarda o resultado na variável `total`.

## 8. Boas práticas da aula

- dar nomes claros para as variáveis
- escrever uma mensagem antes de usar `scanf`
- manter uma ideia por linha
- testar com valores diferentes
- ler os comentários do código com paciência

## 9. Resultado esperado desta aula

Ao final, o aluno deve conseguir ler um pequeno programa em C, entender onde ele
começa, como mostra mensagens, como lê números e como faz uma conta simples com
os valores digitados.
