# Aula 2 - Decisões no programa e repetição opcional

## Objetivo da aula

Ao final desta aula, a turma deve conseguir:

- revisar entrada e saída de dados
- comparar valores
- usar `if`, `else if` e `else`
- entender que um programa pode tomar decisões
- ver uma primeira ideia de repetição com `for`, se houver tempo

## 1. Revisão rápida da aula anterior

Na Aula 1 vimos:

- estrutura básica do programa em C
- `printf` para mostrar mensagens
- `scanf` para ler dados
- variáveis `int` e `float`
- contas com `+`, `-`, `*` e `/`

Agora vamos adicionar uma ideia nova:
o programa pode analisar uma situação e escolher um caminho.

## 2. Operadores relacionais

Operadores relacionais servem para comparar valores.
O resultado de uma comparação será verdadeiro ou falso.

Vamos usar:

- `>` maior que
- `<` menor que
- `>=` maior ou igual
- `<=` menor ou igual
- `==` igual
- `!=` diferente

Exemplos:

```c
nota >= 6
idade >= 18
valor == 0
```

## 3. Estrutura `if`

Usamos `if` quando queremos executar um bloco apenas se uma condição for verdadeira.

Exemplo:

```c
if (nota >= 6) {
    printf("Aprovado\n");
}
```

Leitura da frase:
"se a nota for maior ou igual a 6, mostre Aprovado".

## 4. Estrutura `if` com `else`

Quando queremos dois caminhos, usamos `if` e `else`.

Exemplo:

```c
if (nota >= 6) {
    printf("Aprovado\n");
} else {
    printf("Reprovado\n");
}
```

Leitura da frase:

- se a condição for verdadeira, executa o primeiro bloco
- senão, executa o bloco do `else`

## 5. Estrutura `else if`

Usamos `else if` quando temos mais de duas possibilidades.

Exemplo:

```c
if (media >= 7) {
    printf("Aprovado\n");
} else if (media >= 5) {
    printf("Recuperacao\n");
} else {
    printf("Reprovado\n");
}
```

## 6. Operadores lógicos

Nesta oficina, basta conhecer a ideia:

- `&&` significa "e"
- `||` significa "ou"
- `!` significa "não"

Exemplo:

```c
if (idade >= 18 && idade <= 65) {
    printf("Faixa de adultos em idade ativa\n");
}
```

Se o tempo da aula for curto, você pode apenas mencionar esta parte sem aprofundar.

## 7. Repetição com `for` - tópico opcional

Repetição significa mandar o computador executar uma tarefa várias vezes.

Exemplo:

```c
for (i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

Esse código mostra os números de 1 a 5.

### Leitura do `for`

- começa com `i = 1`
- continua enquanto `i <= 5`
- depois de cada volta, faz `i++`, ou seja, soma 1 em `i`

Como a oficina é curta, este tema aparece apenas no final e pode ser tratado como
demonstração extra se a turma estiver acompanhando bem.

## 8. Resultado esperado desta aula

Ao final, o aluno deve conseguir escrever pequenos programas que leem dados, fazem
uma comparação simples e escolhem uma resposta adequada para a situação analisada.
