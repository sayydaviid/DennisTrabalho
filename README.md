# Controle de Decolagem de Aviões e Manipulação de Filas e Pilhas
Professor: Denis Lima do Rosario
Alunos:
David Tavares - Matrícula: 202311140028
Guilherme Sandim - Matrícula: 202311140021
## Descrição do Trabalho
Este trabalho tem como objetivo implementar dois algoritmos utilizando conceitos de Filas e Pilhas em C++ com alocação dinâmica, conforme solicitado pelo curso de Estruturas de Dados. A implementação utiliza TADs (Tipos Abstratos de Dados) para estruturar a solução de cada problema.

## Questão 1
Escreva um programa que simule o controle de uma pista de decolagem de aviões em um aeroporto. Neste programa, o usuário deve ser capaz de realizar as seguintes tarefas:
a. Listar o número de aviões aguardando na fila de decolagem;
b. Autorizar a decolagem do primeiro avião da fila;
C. Adicionar um avião à fila de espera;
d. Listar todos os aviões na fila de espera;
Listar as características do primeiro avião da fila.
Considere que os aviões possuem um nome e um número inteiro como identificador. Adicione outras características conforme achar necessário na fila implementada por meio de alocação dinâmica.


## Questão 2
Escreva um algoritmo que leia um número indeterminado de valores inteiros. O valor 0 (zero) finaliza a entrada de dados. Para cada valor lido, determinar se ele é um número par ou impar. Se o número for par, então inclui-lo na FILA PAR; caso contrário, incluí-lo na FILA IMPAR. Apos o término da entrada de dados, retirar um elemento de cada fila alternadamente (iniciando-se pela FILA IMPAR) até que ambas as filas estejam vazias. Se o elemento retirado de uma das filas for um valor positivo, então inclui-lo em uma PILHA; caso contrário, remover um elemento da PILHA. Finalmente, escrever o conteúdo da pilha implementada por meio de alocação dinâmica.
OBS: para simplificação, podem colocar a geração de n valores aleatórios.
## Estrutura do Projeto
O código foi organizado em múltiplos arquivos, utilizando o conceito de TAD para garantir a modularidade e a separação das responsabilidades:

Arquivos:
Aviao.hpp: Declaração da classe Aviao, que representa um avião com suas características.
Aviao.cpp: Implementação dos métodos da classe Aviao.
FilaDecolagem.hpp: Declaração da classe FilaDecolagem, que gerencia a fila de decolagem.
FilaDecolagem.cpp: Implementação dos métodos da classe FilaDecolagem.
main.cpp: Arquivo principal que integra as funções e interações com o usuário.
