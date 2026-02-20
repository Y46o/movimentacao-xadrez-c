# Movimentação de Peças de Xadrez em C

## Descrição do Projeto

Este projeto foi desenvolvido como parte da disciplina de **Introdução à Programação de Computadores**, com o objetivo de aplicar e aprofundar conceitos fundamentais da linguagem C, como:

- Estruturas de repetição (`for`, `while`, `do-while`)
- Loops aninhados
- Recursividade
- Controle de fluxo (`break` e `continue`)
- Organização e legibilidade de código

O programa simula o movimento de peças do xadrez por meio de algoritmos estruturados, respeitando as regras específicas de deslocamento de cada peça.

---

## Objetivos Acadêmicos

- Aplicar estruturas de repetição simples e complexas
- Implementar funções recursivas
- Utilizar loops aninhados com múltiplas variáveis
- Desenvolver raciocínio lógico-computacional
- Produzir código organizado, documentado e eficiente

---

## Peças Implementadas

### Torre
- Movimento: 5 casas para a direita
- Implementação: **Recursividade**

### Rainha
- Movimento: 8 casas para a esquerda
- Implementação: **Recursividade**

### Bispo
- Movimento: 5 casas na diagonal (Cima + Direita)
- Implementação: **Recursividade + Loops Aninhados**

### Cavalo
- Movimento em "L":
  - 2 casas para cima
  - 1 casa para a direita
- Implementação: **Loops Aninhados Complexos com múltiplas variáveis e uso de `break`**

---

## Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Terminal (PowerShell / CMD)

---

## Como Compilar e Executar

No terminal, dentro da pasta do projeto:

```bash
gcc xadrez.c -o xadrez 

Windows:
Bash - .\xadrez

Linux / Mac:
Bash - ./xadrez
````
## Exemplo de Execução
````
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Bispo:
Cima
Direita
Cima
Direita
Cima
Direita
Cima
Direita
Cima
Direita

Movimento do Cavalo:
Cima
Cima
Direita
````
Desenvolvido por Yago Nardin
Disciplina: Introdução à Programação de Computadores
Linguagem: C
