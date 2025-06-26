Capítulo 5 - Funções e Procedimentos
============================================================

# Objectivos

* Funções e procedimentos em C
* Cabeçalho e corpo de um função
* Parâmetros
* Passagem de parâmetros de tipos básicos
* Valor de retorno (*return*)
* O "tipo" *void*
* Protótipos e funções
* Variáveis locais

# Características De Uma Função

- *Cada função tem que ter um nome único, o qual serve para a sua invocação e algum lugar no programa a que pertence.*
- *Uma função pode ser invocada a partir de outras funções.*
- *Uma função (como o seu nome indica) deve realizar **UMA ÚNICA TAREFA** bem definida.*
- *Uma função deve comportar-se como uma caixa preta. Não interessa como funciona, o que interessa é que o resultado
  final seja o esperado, sem efeitos colaterais.*
- *O código de uma função deve ser o mais independente possível do resto do programa, e deve ser tão genérico quanto
  possível, para poder ser utilizado em outros projectos.*
- *Uma função pode receber parâmetros que alterem o seu comportamento de forma a adaptar-se facilmente a situações
  distintas.*
- *Uma função pode retornar, para a entidade que o invocou, um valor como resultado do seu trabalho.*

# Como Funciona Uma Função

- *O código de uma função só é executado quando é invocada em alguma parte do programa a que está de algum modo ligada.*
- *Sempre que uma função é invocada, o progarma que a invoca é "suspenso" temporariamente. Em seguida, são executadas as
  instruções presentes no corpo da função. Uma vez terminada a função, o controle de execução do progama volta ao local
  em que foi invocada.*
- *O programa que invoca uma função pode enviar **Argumentos**, que são recebidos pela função. Esses são recebidos e
  armazenados em variáveis locais, que são automaticamente iniciadas com os valores enviados. A essas variáveis dá-se o
  nome de **Parâmetros**.*
- *Depois de terminar o seu funcionamento, uma função pode devolver um valor para o programa que a invocou.*

# Resumo do Capítulo 5

* Neste capítulo apresentamos as funções e procedimentos em C.

* O formato genérico de uma função é:

````c++
tipo nome_função(tipo1 param1, tipo2 param2, ..., tipon paramn)
{
    corpo da função
}
 ````

* Existem duas razões bem conhecidas para recorrer à escrita de funções:

    * *Reduzir a complexidade de um programa.*
    * *Evitar a replicação de código ao longo de um programa.*

* As funções são trechos de código, independentes do programa em que são utilizadas, e devem realizar uma única tarefa.
  O
  objectivo é que essa tarefa seja realizada correctamente. A forma como a tarefa é desempenhada não tem qualquer
  interesse. Um função deve funcionar, assim, como uma **caixa preta** em que não se vê o mecanismo interno, apenas se
  sabe o que entra e sai, sem provocar efeitos colaterais.
* O código de uma função só e invocada, em alguma parte do progama a que está de algum modo ligada.
* Sempre que uma função é invocada, o programa que a invoca é *"suspenso"* temporariamente. Em seguida são executadas as
  instruções presentes no corpo da função. Uma vez terminada a função, o controle de execução do progama volta ao local
  em que esta foi invocada.
* As funções são uma ferramenta essencial ao desenvolvimento estruturado de aplicações.
* Cada função tem de ter um nome único, que não pode ser igual ao nome de outra função ou de alguma variável. As regras
  para o nome de uma função são iguais às regras enunciadas para a designação das variáveis. Mais uma vez se repete que
  o nome de uma função deverá indicar aquilo que ela faz, tal como o nome de uma variável deverá indicar aquilo que ela
  contém.
* Uma função pode receber parâmetros e pdoe, ainda, devolver um único valor como resultado da sua execução.
* Depois de terminar o seu funcionamento, uma função pode devolver um valor para o progama que a invocou. A devolução de
  valores é realizada através da instrução **return**, seguida da expressão cujo valor queremos devolver.
* Assim que a instrução *return* é executada, a função termina a sua execução e o controle do progarma volta ao local
  onde a função tinha sido invocada.
* Uma função que não devolve qualquer valor é, habitualmente, designada por **Procedimento**. Sempre que uma função não
  devolve qualquer valor deve ser declarada como se "devolvesse o tipo **void**". A palavra reservada **void** indica
  ausência de tipo e é normalmente traduzida por *nada* ou *vazio*.
* As funções podem ser colcoadas em qualquer local de um arquivo, antes ou depois do *main*, antes ou depois de serem
  invocadas. É, no entanto, aconselhável colocar os protótipos de todas as funções (cabeçalhos das funções seguidos de
  ponto-e-vírgula) imediatamente antes do código da primeira unção presente no arquivo, a fim de evitar eventuais erros
  de compilação.
