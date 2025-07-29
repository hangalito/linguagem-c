Capítulo 2: Tipos de Dados Básicos
============================================================

# Objectivos

- Tipos de dados em C - *char*, *int*, *float* e *double*
- Variáveis - declaração, regras para o nome das variáveis
- Atribuição - simples e encadeada
- Inteiros, reais, caracteres - características próprias
- Operadores numéricos - +, -, *, / e %
- Leitura e escrita de variáveis e expressões - funções *printf*, *scanf* e *getchar*
- Formatos de leitura e escrita - %c, %d, etc.
- Caracteres *versus* inteiros
- *Casting* - promoção de expressções/variáveis a tipos diferentes
- Alguns error comuns

# Formatos de Leitura e Escrita

| Tipo                   | Formato        | Observações                             |
|------------------------|----------------|-----------------------------------------|
| **char**               | %c             | Um único **caractere**                  |
| **int**                | %d ou %i       | Um único inteiro (Base **decimal**)     |
| **int**                | %o             | Um único inteiro (Base **o**ctal)       |
| **int**                | %x ou %X       | Um único inteiro (Base he**x**adecimal) |
| **short int**          | %hd            | Um s**h**ort inteiro (Base **d**ecimal) |
| **long int**           | %ld            | Um **l**ongo inteiro (Base **d**ecimal) |
| **unsigned short int** | %hu            | short inteiro positivo                  |
| **unsigned int**       | %u             | inteiro positivo                        |
| **unsigned long int**  | %lu            | long inteiro positivo                   |
| **float**              | %f ou %e ou %E |
| **double**             | %f ou %e ou %E |

# Resumo do Capítulo 2

* A linguagem C apresenta 4 tipos de dados básicos - **char**, **int**, **float**, **double**.
* Podemos declarar variáveis de cada um desses tipos para armazenar valores. Depois de declarada, uma variável fica com
  um valor aleatório
* A atribuição de valores a uma variável é realizada através do sinal **=**
* Podem ser realizadas atribuições encadeadas (a=b=c=2). Nesse caso, elas são realizadas da direita para a esquerda,
  pois uma atribuição devolve sempre o valor atribuído.
* Uma variável pode ser iniciada assim que é declarada, colocando o sinal de atribuição seguido do valor a ser
  atribuído (Ex.: *int a = 234*).
* O nome de uma variável deverá sempre representar a informação que ela contém.
* Qualquer operação entre inteiros devolve sempre um resultado inteiro. As operações mais comuns são: a soma (+), a
  subtração (-), a multiplicação (*), a divisão inteira (/), e o resto da divisão inteira (%), também conhecido por
  módulo.
* Os reais também podem ser submetidos às operações anteriores, à excepção do módulo (%).
* A leitura e a escrita de valores podem ser realizadas através das funções *scanf*, e *printf*, respectivamente,
  utilizando os formatos de leitura adequados para cada tipo **%d** - *int*, **%f** - *float* e *double* e **%c** -
  *char*. No caso do *scanf*, cada variável deverá ser precedida de um **&**.
* O tipo *int* permite algumas pequenas variações, quer no tamanho, quer na forma, através dos prefixos **short**, *
  *long**, **signed** e **unsigned**.
* O tipo *char* permite as variações **signed** e **unsigned**.
* As variáveis do tipo **char** não são mais do que pequenos inteiros guardados num único *byte*. Assim, podem ser
  realizadas todas as operações numéricas que podem realizar com inteiros.
* Sempre que é necessário alterar uma expressão para um determinado tipo, utiliza-se o *casting* **(tipo)**. Essa
  alteração é temporária.
* Não se deve realizar a leitura ed variáveis de um determinado tipo utilizando um formato de leitura que não correspoda
  a esse tipo.
