# Projeto 01 — Utilitário de Texto

## Descrição

Aplicação simples de linha de comando desenvolvida em C para realizar operações básicas de análise e classificação de caracteres em uma palavra.

O projeto foi desenvolvido como exercício prático de manipulação de strings, estruturas de repetição, condicionais e modularização por meio de funções.

## Funcionalidades

- Exibição da palavra original.
- Contagem total de caracteres.
- Conversão visual para letras maiúsculas.
- Contagem de vogais.
- Contagem de consoantes.
- Contagem total de letras.
- Contagem de dígitos numéricos.
- Contagem de símbolos.
- Verificação básica de falha na leitura da entrada.

## Exemplo de Execução

**Entrada:**

```text
Security123!
```

**Saída:**

```text
Original: Security123!
Characters: 12
Uppercase: SECURITY123!
Vowels: 3
Consonants: 5
Letters: 8
Digits: 3
Symbols: 1
```

## Conceitos Aplicados

- Declaração e utilização de variáveis.
- Arrays de caracteres e strings.
- Estruturas condicionais (`if`).
- Estruturas de repetição (`for`).
- Operadores relacionais e lógicos.
- Funções e protótipos de funções.
- Passagem de argumentos e parâmetros.
- Retorno de valores (`return`).
- Utilização das bibliotecas `stdio.h`, `string.h` e `ctype.h`.
- Validação básica de entrada com `scanf()`.

## Funções Implementadas

| Função | Responsabilidade |
|---|---|
| `count_vowels()` | Contar vogais. |
| `count_consonants()` | Contar consoantes. |
| `count_digits()` | Contar dígitos numéricos. |
| `count_symbols()` | Contar caracteres que não são letras ou dígitos ASCII. |
| `print_uppercase()` | Imprimir os caracteres em maiúsculas. |

## Compilação e Execução

É necessário possuir um compilador C, como o GCC.

No terminal, dentro da pasta do projeto:

**Compilar:**

```bash
gcc main.c -o utilitario-texto
```

**Executar no Windows pelo Git Bash:**

```bash
./utilitario-texto.exe
```

## Limitações Conhecidas

- A entrada aceita apenas uma palavra por execução.
- A leitura é limitada a 199 caracteres por meio de `scanf("%199s", ...)`.
- A classificação de letras foi desenvolvida para caracteres ASCII.
- Caracteres acentuados e outros caracteres não ASCII não são tratados adequadamente.
- O uso atual de `tolower()` e `toupper()` pode resultar em comportamento indefinido com determinados valores de entrada não ASCII.
- Não possui menu interativo.

## Melhorias Planejadas

- Implementar conversão para letras minúsculas.
- Implementar inversão de palavras.
- Adicionar verificação de palíndromos.
- Criar um menu interativo.
- Aprimorar a validação e o tratamento de entradas.

## Finalidade

Este projeto possui finalidade exclusivamente educacional e representa uma etapa inicial do meu aprendizado em C.

O foco está na compreensão dos fundamentos da linguagem, na implementação de funções independentes e na construção progressiva de código organizado.
