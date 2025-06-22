Capítulo 3: Testes e Condições
============================================================

# Objectivos

- Como se representam em C os valores lógicos VERDADE e FALSO
- Condições lógicas
- Operadores relacionais: (==, >, <, >=, <=, !=)
- Operadores lógicos: (&&, ||, !)
- *if-else*,*switch*, *break*
- Instruções *if-else* encadeadas
- Operador condicional: ?
- Precedência dos operadores
- Blocos de instruções
- Identação

****

# Resumo do Capítulo 3

* Em C não existe um tipo específico para armazenar valóres lógicos. Estes são representados por 0 (**Falso**), e
  qualquer valor diferente de zero representa o valor **Verdade**.
* O conteúdo de uma variável, ou o resultado de uma expressão, pode ser usado como um valor lógico. Embora qualquer
  variável ou expressão possa armazenar um valor lógico, é totalmente desaconselhável a utilização de reais como valores
  lógicos devido aos erros de arredondamento.
* O teste de condições pode ser realizado através das intruções *if-else* e *switch*.
* Na instrução *if-else* a intrução é avaliada e, caso seja Verdadeira (isto é, diferente de zero), é executada a
  instrução associada ao *if*. A componente *else* é executada quando a condição devolve o valor lógico Falso (zero).
* A componente *else* do *if* é opcional.
* No caso de ser necessário colocar mais do que uma instrução dentro de um *if-else*, deve-se criar uma instrução
  composta (uma instrução que é composta por várias instruções), colocando o conjunto de instruções entre chaves. Essa
  estrutura chama-se **Bloco**.
* Um **Bloco** nada mais é do que um conjunto de instruções organizadas como um todo. Um bloco pode ser sempre colocado
  no local em que uma instrução simples pode ocorrer. Em geral, depois de um Bloco não é necessário colocar **;**.
* Uma característica fundamental de qualquer programa correctamente escrito é a sua **Indentação**. A indentação não tem
  qualquer efeito na compilação ou execução do programa. Serve unicamente para representar as depedências que algumas
  instruções têm de outras que as precedem.
* A indentação é uma característica pessoal de cada programador.
* É possível operar valores lógicos através dos operadores binários **&&** (AND) e **||** (OR) ou através do operador
  unário **!** (NOT).
* O operador **&&** tem maior precedência que o operador **||**.
* Esses operadores permitem a combinação de duas ou mais expressões lógicas numa única expressão, devolvendo um único
  valor lógico como resultado. da avaliação da expressão total.
* A instrução *if-else* pode ser evitada sempre que na mesma variável, dependendo de uma condição possa receber dois
  valores diferentes. Nesse caso, a instrução *if-else* pode ser substituída pelo operador condicional **?:**.
* Ao contrário do *if*, que permite definir bandas de valores, (x > 10 && x <= 100), o switch só admite valores
  constantes predefi dos tipos *char*, *int*, ou *long*.
* Depois de uma instrução *switch* verificar qual o *case* correspondente à expressão avaliada, inicia a execução na
  instrução associada a esse *case*, executando em seguida todas as instruções seguintes em cascate (incluindo as que
  pertencem a outros *case*) até terminar o *switch* ou até ser encontrada a instrução **break**.
* A instrução **break** permite parar a execução de um conjunto de instruções dentro de um *switch*, continuando o
  programa na instrução seguinte ao *switch*.
* Uma vez que o conjunto de instruções a executar dentro de um *switch* é controlado pela instrução *break*, não é
  necessário o uso de chaves para agrupar o conjunto de instruções associadas a um *case*.
