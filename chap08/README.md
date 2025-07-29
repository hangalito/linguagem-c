Capítulo 8: Ponteiros (*Pointers*)
============================================================

# Objectivos

* Introdução aos conceitos básicos.
* Noção de variável, endereço e ponteiro.
* Operadores * (apontado por) e & (endereço).
* Noção de NULL.
* Declaração e carga inicial de variáveis do tipo ponteiro.
* Aritmética de ponteiros.
* Relação entre ponteiros e vectores.
* Passagem de vectores à funções.
* Ponteiros de ponteiros.

# Declaração de Ponteiros

* Um conceito que não se pode perder de vista é que ponteiros é uma variável como outra qualquer. O seu objectivo é
  armazenar o endereço doutra variável, o qual é, por sua vez, um número.
* Se uma variável do tipo ponteiro é capaz armazenar um número (o endereço doutra), então terá de ocupar algum espaço em
  memória. Tem por isso de ser declarada tal como qualquer outra variável.
* A sintaxe de declaração de ponteiros é a seguinte:
  ````c++
   tipo * ptr;
  ````
  em que
  **ptr** — É o nome da variável do tipo ponteiro. <br>
  **tipo** — É o tipo da variável para qual apontará. <br>
  <strong>*</strong> — Indica que é uma variável do tipo ponteiro.
* A declaração de ponteiros pode ser relaizada no meio doutras variáveis do mesmo tipo.
* ### Exemplo
  ````c++
  char a, b, *p, c, *q;
  int idade, *p_idade;
  ````

## Resumo das operações sobre ponteiros

| **Operação**     | **Exemplo**   | Observações                                                                                                                                           
|------------------|---------------|-------------------------------------------------------------------------------------------------------------------------------------------------------
| **Atribuição**   | ptr = &x      | Podemos atribuir um valor (endereço) a um ponteiro. Se quisermos que aponte para nada podemos atribuir-lheo valor constante NULL.                     |
| **Incrementp**   | ptr = ptr +2  | Incremento de 2 * sizeof(tipo) de ptr.                                                                                                                |
| **Decremento**   | ptr = ptr -10 | Decremento de 10 * sizeof(tipo) de ptr.                                                                                                               |
| **Apontado por** | *ptr          | O operador asterisco permite obter o valor existente na posição cujo endereço está armazenado em ptr.                                                 |
| **Endereço de**  | &ptr          | Tal como qualquer outra variável, um ponteiro ocupa um espaço em memória. Desta forma podemos saber qual o endereço que um ponteiro ocupa em memória. |
| **Diferença**    | ptr1 - ptr2   | Permite-nos saber qual o nº de elementos entre ptr1 e ptr2                                                                                            |
| **Comparação**   | ptr > ptr2    | Permite-nos verificar, por exemplo, qual a ordem dos dois elementos num vector através do valor dos seus endereços.                                   |