# Controle de Decolagem de Aviões e Manipulação de Filas e Pilhas
Professor: Denis Lima do Rosario
Alunos:
David Tavares - Matrícula: 202311140028
Guilherme Sandim - Matrícula: 202311140021
## Descrição do Trabalho
Este trabalho tem como objetivo implementar dois algoritmos utilizando conceitos de Filas e Pilhas em C++ com alocação dinâmica, conforme solicitado pelo curso de Estruturas de Dados. A implementação utiliza TADs (Tipos Abstratos de Dados) para estruturar a solução de cada problema.

Questão 1: Controle de Decolagem de Aviões
O programa simula o controle de uma pista de decolagem de aviões em um aeroporto. O usuário pode realizar as seguintes operações:

Listar o número de aviões aguardando na fila de decolagem.
Autorizar a decolagem do primeiro avião da fila.
Adicionar um avião à fila de espera.
Listar todos os aviões na fila de espera.
Mostrar as características do primeiro avião da fila.
Cada avião possui as seguintes características:

Nome do avião
Identificador numérico
Companhia aérea
Destino
A implementação utiliza uma Fila para gerenciar os aviões aguardando a decolagem.

## Questão 2: Manipulação de Filas e Pilhas com Números Aleatórios
O programa lê uma sequência de números inteiros gerados aleatoriamente e os separa em duas filas:

Fila PAR: Contém os números pares.
Fila IMPAR: Contém os números ímpares.
Ao final, os elementos são retirados alternadamente de cada fila e, dependendo do valor, são empilhados em uma Pilha. Se o número for positivo, ele é empilhado; se for negativo, o topo da pilha é removido. No final, o conteúdo da pilha é exibido.

## Estrutura do Projeto
O código foi organizado em múltiplos arquivos, utilizando o conceito de TAD para garantir a modularidade e a separação das responsabilidades:

Arquivos:
Aviao.hpp: Declaração da classe Aviao, que representa um avião com suas características.
Aviao.cpp: Implementação dos métodos da classe Aviao.
FilaDecolagem.hpp: Declaração da classe FilaDecolagem, que gerencia a fila de decolagem.
FilaDecolagem.cpp: Implementação dos métodos da classe FilaDecolagem.
main.cpp: Arquivo principal que integra as funções e interações com o usuário.
