Capítulo 6 - Vetores
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
