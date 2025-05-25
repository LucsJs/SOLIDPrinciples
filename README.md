# SOLIDPrinciples
Tarefa de SOLID

O arquivo 'S.cpp' exemplifica o princípio S - Single Responsibility Principle.
Esse princípio da engenharia de software nos diz que cada unidade de código(função, classe, etc) deve ter apenas uma responsabilidade.
Ter essa ideia em mente na hora de fazer um código evita que uma classe fique com muitas funções diferentes, facilitando a manutenção e o entendimento do código.
No exemplo, a classe AlunoPrinter tem a responsabilidade de apenas imprimir o nome.

O arquivo 'O.cpp' exemplifica o princípio O - Open/Closed Principle.
A ideia geral aqui é a de que unidades de código devem estar abertas para extensão, mas fechadas para modificação.
Serve para adicionar novos comportamentos sem precisar alterar o código existente.
No exemplo, 'Forma' é uma interface, e podemos criar novas formas(Triângulo, Losango, etc) sem modificar o main ou a função desenharForma.

O arquivo 'L.cpp' exemplifica o princípio L - Liskov Substitution Principle.
Classes derivadas devem poder substituir suas classes base sem alterar o comportamento esperado.
Garante que herança seja usada corretamente, evitando comportamentos inesperados.
No exemplo, a classe Andorinha pode ser usada no lugar da classe Ave e usa-lá não quebraria o  funcionamento da função que espera uma Ave.
