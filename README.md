# **Linguagem C** 



#### **Tudo usado nos exercícios**

1. Estrutura básica:

Printf **saída de dados**

```
Printf("Mensagem a ser escrita na tela");
```

Scanf ***\*entrada de dados\****;

Estrutura Básica:

scanf(%tipo de variável, &nome_da_variável);

2. ### **VARIÁVEIS** 

#### **Características de variáveis**

- Possui nome

- Possui tipo

- Possui tamanho 

- Possui valor

### **Tipos Primitivos**

​                      

| Tipos de Variáveis |               Tipos de Variáveis  Descrição                |
| :----------------: | :--------------------------------------------------------: |
|        Char        |                    Armazena Caracteres                     |
|        Int         |                      Números inteiros                      |
|       Float        |       Números com pontos flutuante (Casas Decimais )       |
|       Double       | Armazena os números com pontos flutuantes (Casas decimais) |

3. ### **Operadores** 

Se subdividem em três parâmetros:

- 3.1 Operadores Aritméticos

  São operadores matemáticos para resoluções que necessitam de funções matemáticas

| Operador | Descrição     | Exemplo | Resultado |
| -------- | ------------- | ------- | --------- |
| +        | Soma          | 4 + 2   | 6         |
| -        | Subtração     | 4 - 2   | 2         |
| *        | Multiplicação | 4 * 2   | 8         |
| /        | Divisão       | 4 / 2   | 2         |
| =        | Atribuição    | x = 4   | 4         |
| %        | Módulo        | 4 % 2   | 0         |

- 3.2 Operadorres Relacionais 



| Operador |  Descrição  | Exemplo |
| :------: | :---------: | :-----: |
|    ==    |   Igual a   | x == y  |
|    !=    |  Diferente  | x != 2  |
|    >     |  Maior que  |  4 > 2  |
|    <     |  Menor que  |  4 < 2  |
|    >=    | Maior Igual | 4 >= 2  |
|    <=    | Menor Igual | 4 <= 2  |

- 3.3 Operadores Lógico
    1.  O operador de negação é usado para inverter o resultado da expressão. 
    2. O operador de conjunção é usado para criar condições em que todas as alternativas sejam verdadeiras.
    3. O operador de disjunção é usado para criar condições em que basta uma condição ser verdadeira para que o resultado também seja.

| Operador |   Descrição   |       Exemplo        |
| :------: | :-----------: | :------------------: |
|    &&    | Conjunção (^) |  (x > y) && (a ==b)  |
|    !     |  Negação (~)  |      !(x == y)       |
|   \|\|   |    Ou (v)     | (x > y) \|\| (a ==b) |

- 3.4 Operadores de Incremento e Decremento 

  ​		 Incremento

  ```
  x =  x + 1;  // adiciona 1 a x
  
  ++x // adiciona 1 a x
  
  x++ // adiciona 1 a x
  ```

  ​	

  ​		Decremento

  ```
  x = x - 1; // subtrai 1 de x
  
  --x // subtrai 1 de x
  
  x-- // subtrai 1 de x 
  ```

  
