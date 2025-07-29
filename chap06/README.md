Capítulo 6: Vetores
============================================================

# Objectivos

* O que é um vector
* Declaração de vectores
* Índices e posições dos elementos no vector
* Matrizes e vetores multidimensionais
* Definição de constantes em C
* Diferenças entre *const* e *#define*
* Passagem de vectores para funções
* Geração de números aleatórios

# Notas Importantes

* *Os elementos de um vector são sempre armazenados em posições **contíguas** de memória.*
* *Os elementos de um vector declarado sem qualquer carga inicial contêm valores aleatórios.*
* *O índice do primeiro elemento de um vector é sempre 0 (ZERO).*
* *Os índices de um vector com n elementos variam sempre entre **0** e **n-1**.*
* *O valor existente em uma posição do vector **v** pode ser obtido através do índice em que essa posição está
  armazenada **v[índice]**.*
* *O compilador não verifica se os índices utilizados num vector estão ou não correctos. Um exemplo comum de erro de
  manipulação de um vector com n elementos é a utilização do índice **n** (**v[n]**), que não pertence ao vector e pode
  originar problemas graves, pois estaríamos a alterar memória que não nos pertence.*
* *O compilador não verifica se os índices utilizados num vector estão ou não correctos com a declaração do vector. Isto
  é, podemos declarar um vector v com dimensões 3 e referenciar (erradamente) posições superiores ou inferiores, sem que
  o compilador indique qualquer erro.*
* *Um vector pode ser automaticamente iniciado com um conjunto de valores existente dentro de chaves, após o
  sinal =. Isto apenas pode ser feito quando da declaração do vector.*
* *Se o número de cargas iniciais for menor que o número de elementos do vector, os elementos em falta são iniciados com
  o valor ZERO.*
* Pode-se declarar um vector sem indicar qual o número de elementos que ele irá conter, desde estes sejam colocados na
  sua carga inicial. Nesse caso, o compilador calcula, automaticamente, o número de elementos que o vector irá conter.*
* *Não se pode declarar vectores sem dimensão. Se não sabemos qual a dimensão pretendida, como poderá o compilador saber
  qual o espaço necessário?*

# Diferenças entre *const* e *#define*

* *Uma constante definida com **const** existe fisicamente em uma determinada posição de memória.*
* *Uma constante definida com **#define** não existe fisicamente em memória, sendo o seu valor substituído ao longo do
  programa na fase pré-processamento (ainda antes da compilação).*
* *A palavra **const** faz parte das palavras reservadas da linguagem C*
* *A palavra **#define** é uma directiva que indica ao pré-processador que o símbolo que a segue vai ficar com o valor
  que aparece depois do símbolo. O pré-processador, antes de compilar o programa, substitui todas as ocorrências do
  símbolo pelo valor com que foi definido. (No exemplo anterior, substitui todas as ocorrências de **NUM** por 10). É
  como se existisse um duende maroto que substituísse todas as ocorrências de **NUM** por 10, imediatamente antes da
  compilação do programa.*
* *Uma constante definida com a palavra **const** fica com o tipo que lhe foi colocado na definição.*
* *O tipo associado a uma constante definida com **#define** é o tipo que resulta da expressão que aparece no
  componente **valor**.*
* *Uma vez que o símbolo **#define** não faz parte da linguagem C, essa linha não é seguida de ponto-e-vírgula.*

# Resumo do Capítulo 6

* Um vector não é mais do que um conjunto de elementos do mesmo consecutivos, todos do mesmo tipo, armazenados em
  memória e que podem ser acessados por um nome e um índice.
  <br>A declaração de vectores é realizada indicando qual o tipo, o nome e o número de elementos do vector.

## Exemplo

````c++
char nome[20];     /* Vector com 20 caracteres */
int numero[10];    /* Vector com 10 inteiros   */
````

* A manipulação dos vectores é sempre realizada elemento a elemento. No entanto, é necessário prestar atenção ao índice
  do primeiro elemento de qualquer vector, que é sempre ZERO.
  <br>O Acesso ao conteúdo de um elemento é feito utilizando-se colchetes **[ ]**.

## Exemplo

````c++
numero[0] = 123;             /* Colocar 123 como valor do primeiro */ 
                             /* elemento do vector                 */
nome[5] = toupper(nome[5]);  /* Colocar a 6ª letra do nome         */
                             /* (índice 5) em maiúscula            */
````

* Os vectores podem ser automaticamente iniciados só quando são declarados, devendo os valores do vector estar entre
  chaves e após o sinal de igual.

````c++
char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
````

Nesse caso, a dimensão do vector pode ser ignorada, pois o compilador calcula o número de elemento que se encontram na
zona das cargas iniciais e dimensiona o vector com esse valor.

````c++
char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
````

é equivalente a

````c++
char vogal [] = {'a', 'e', 'i', 'o', 'u'}; /* são 5 caracteres */
````

* Se o número de elementos do vector for superior ao número de cargas iniciais, então os elementos do vector são
  iniciados com os valores respectivos. Aqueles que não tiverem um valor são iniciados com o valor ZERO.

````c++
int v[10] = {5, 7, 9};
````

é equivalente a

```c++
int v[10] = {5, 7, 9, 0, 0, 0, 0, 0, 0, 0}
```

ou

````c++
int v[10] = {5, 7, 9, 0, 0, 0, 0, 0, 0, 0}
````

* Como o índidce de um vector zomeça com ZERO, o *n-ésimo* elemento do vector encontra-se sempre na posição *n-1*.
* Os vectores podem ter mais do que uma dimensão, devendo o número de elemtos de cada dimensão ser colocado entre
  colchetes na declaração do mesmo.

  **Exemplo**

````c++
int v[6][7][10][5];
````

* A carga inicial de vectore multidimensionais segue os mesmos critérios dos vectores unidimensionais, devendo os
  elementos de cada dimensão serem colocados entre chaves.

**Exemplo**

````c++
int v[2][3] = {{1, 2}, {3, 4}, {5, 6}};
````

* A passagem de vectores de dimensão n, para funções em C, deve ser realizada indicando obrigatoriamente pelo menos as
  n-1
  dimensões (mais à direita do vector). É no entanto, habitual indicar todas as dimensões quando se trata de vectores
  com
  mais de duas dimensões.

**Exemplos:** Possíveis cabeçalhos de função que receberiam como parâmetro o vector **v** declarado anteriormente.

````c++
f(int v[2][3]) { . . . }
g(int v[][3]) { . . . }
h(int *v[2]) { . . . }
````

* A definição de constantes em C pode ser realizada de duas formas distintas: utilizando a instrução **const** da
  linguagem C ou usando a directiva **#define** de pré-processamento que permite definir um símbolo:

````c++
const int num = 10; out #define NUM 10
````
