Capítulo 4 - Laços
============================================================

# Objectivos

- Laços *while*, *for*, e *do...while*
- Instruções *break* e *continue*
- Laços encadeados
- Laços infinitos
- Operadores ++ e --
- Atribuições compostas +=, -=, *=, /=, %=

# Estruturas Condicionais

<table>
<tr>
<td></td>
<th>while</th>
<th>for</th>
<th>do...while</th>
</tr>
<tr>
<th>Sintaxe</th>
<td style="text-align: center">
while (cond) <br>
instrução
</td>
<td style="text-align: center">
for (carga inic; cond; <br>
pos-inst) <br>
instrução
</td>
<td style="text-align: center">
do <br>
instrução <br>
while (cond) <br>
</td>
</tr>
<tr>
<th>Executa a instrução</th>
<td style="text-align: center">zero ou mais vezes</td>
<td style="text-align: center">zero ou mais vezes</td>
<td style="text-align: center">1 ou mais vezes</td>
</tr>
<tr>
<th>Testa a condição</th>
<td style="text-align: center">antes da instrução</td>
<td style="text-align: center">antes da instrução</td>
<td style="text-align: center">depois da instrução</td>
</tr>
<tr>
<th>Utilização</th>
<td style="text-align: center">frequente</td>
<td style="text-align: center">frequente</td>
<td style="text-align: center">pouco frequente</td>
</tr>
</table>

# Resumo do Capítulo 4

- Em C, existem três laços distintos, os laços **while**, **for** e **do..while**. Todos eles são executados enquanto a
  condição a eles associadas for Verdadeira, isto é, a condição que é colocada nos laços mostra qual é o critério que se
  tem que verificar para que o laço seja executado.
- Nos laços **for** e **while**, o teste da condição é realizado antes de qualquer instrução, permitindo assim que o
  laço seja executado zero ou mais vezes . No caso do laço **do...while**, a condição é testada depois de executada a
  instrução correspondente pelo menos uma vez.
- Dentro de um laço podem aparecer instruções simples, outros laços ou blocos de instruções. Quando um laço aparece
  dentro de outro, estamos diante de um **Laço Ecadeado**.
- É possível a criação de **Laços Infinitos**, colocando na condição do laço uma condição que seja sempre verdadeira.
- O comportamento normal dos laços pode ser alterado com o recurso às instruções **break** e **continue**. A instrução *
  *break** termina o laço, continuando o programa na próxima instrução a seguir ao laço. A instrução **continue** faz
  com que determinada iteração seja terminada, passando-a automaticamente à próxima iteração.
- A linguagem C colcoa à nossa disposição um conjunto de operadores particularmente úteis (**++** e **--**) nas
  situações de incremento e de decremento de uma variável.
- Os operadores **++** e **--** podem ser utilizados tanto à esquerda como à direita de uma variável, tendo, no entanto,
  resutlados diferentes se esta não se encontrar isolada.
- Quando colocado à esquerda, o operador ++ incrementa a variável antes de usá-la.
- Quando presente à direita, o valor da variável é utilizado na expressão e só depois é que a variável é incrementada (
  idem para --).
- Nunca se deve utilizar os operadores ++ ou -- em variáveis que apareçam mais do que uma vez em uma mesma expressão.
- A alteração dos valores de uma variável pode ser realizada de forma mais simples se o novo valor da variável depender
  do seu valor anterior. Nesse caso, pode-se utilizar uma atribuição composta para indicar qual a operação a realizar,
  colocando o operador à esquerda do sinal de atribuiçã, evitando assim a escrita da variável à direita da atribuição
  Exemplo: x /= 2 + 3; é equivalente a x = x / (2 + 3);.
