Capítulo 7: Strings
============================================================

# Objectivos

* O que é uma *string*
* Caracteres e *strings*
* Declaração de *strings*
* O caractere delimitador '\0'
* Relação entre vectores e *strings*
* Leitura e escrita de *strings*
* Passagem de *strings* para funções
* Principais funções de manipulação de *strings*

# Resumo

* As *strings* são apenas vectores de caracteres que contêm um caractere especial - o caractere **'\0'**. Esse caractere
  indica ao programador e às funções que manipulam *strings*, qual a posição do vector onde terminam os caracteres úteis
  da *string*
* EM C as *strings* não podem ser manipuladas directamente (atribuídas, concatenadas, comparadas, etc), pois não são um
  tipo básico da linguagem.
* No entanto, existe um conjunto *standard* de funções que permite a sua manipulação. As funções mais utilzadas são:
    * **strlen** *Devolve o comprimento de uma string*
    * **strcpy** *Copia uma string para outra*
    * **strcat** *Concatenação de strings*
    * **strcmp** *Comparação alfabética de strings*
    * **stricmp** *Comparação de strings com ignore case*
    * **strchr** *Procura um caractere dentro de uma string*
    * **strstr** *Procura uma string dentro de outra*
    * **strlwr** *Converte todos os caracteres de uma string para minúsculas*
    * **strupr** *Converte todos os caracteres de uma string para maiúsculas*

  e estes estão presentes em todos os compiladores (excepto o *strlwr* e *strupr*)
* Para ter acesso a elas bastará colocar a seguinte linha
  ````c++
  #include <string.h>
  ````
* No entanto, o conjunto dessas funções aqui apresentadas é apenas uma pequena parte de todas as funções sobre strings
  que o seu compilador coloca à disposição.
