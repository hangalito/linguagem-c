Capítulo 1 - O Meu Primeiro Programa
============================================================

# Objectivos

- Anatomia de um programa em C
- Bloco de instruções
- Função de escrita na tela - *printf*
- Características especiais de C
- *Strings* em C
- Características especiais
- Comentários em C

# Resumo do Capítulo 1

* Em C, um programa começa com a função **main()**.
* O código a executar é colocado entre **{** **}**.
* Um **Bloco** é formado por qualquer conjunto de intruções entre **{** **}**.
* Cada instrução deve ser seguida de ponto-e-vírgula (**;**).
* A disposição do código é arbitrária e depende das preferências de cada programador.
* C faz distinção entre minúsculas e maiúsculas - diz-se que é **Case Sensitive**.
* As *strings* em C são delimitadas pelo caractere aspas ".
* Para escrever uma mensagem na tela usa-se a função **printf()**.
* A função **printf** não faz parte da linguagem C. Pertence à sua extensa biblioteca de função.
* Para termos acesso a esta e a outras funções de entrada/saída devemos incluir nos nossos programas o arquivo **stdio.h
  ** através da directiva pré-processador **#include <stdio.h>**.
* As linhas começadas por **#** (**#include**, **#define**, etc) não são C, mas sim directivas ao pré-processador. Por
  isso não devem ser seguidas de ponto-e-vírgula.
* A representação de caracteres especiais ou de caracteres que, de outra forma, seriam difíceis de representar faz-se
  através de um conjunto de dois ou mais caracteres, sendo em geral o primeiro caractere a barra invertida (\ -
  *Backlash*)
* Os **comentários** são escritos entre <strong>/*</strong> e <strong> */</strong> e são simplesmente ignorados pelo
  compilador (a menos que se encontrem dentro de uma *string*).
* Não podem existir comentário dentro de comentários.
