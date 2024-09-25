#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Fila.hpp"
#include "Pilha.hpp"

int main() {
    Fila filaPar;
    Fila filaImpar;
    Pilha pilha;

    srand(time(0));  // Seed para números aleatórios

    // Gerar números aleatórios e classificá-los como par ou ímpar
    for (int i = 0; i < 10; i++) {  // Gerando 10 valores para simplificação
        int num = rand() % 101 - 50;  // Gera números entre -50 e 50
        std::cout << "Número gerado: " << num << std::endl;
        
        if (num % 2 == 0) {
            filaPar.inserir(num);
        } else {
            filaImpar.inserir(num);
        }
    }

    // Processar as filas alternadamente
    bool turnoImpar = true;
    while (!filaPar.vazia() || !filaImpar.vazia()) {
        if (turnoImpar && !filaImpar.vazia()) {
            int valor = filaImpar.retirar();
            std::cout << "Retirado da fila ímpar: " << valor << std::endl;

            if (valor > 0) {
                pilha.empilhar(valor);
            } else if (!pilha.vazia()) {
                pilha.desempilhar();
            }
        } else if (!filaPar.vazia()) {
            int valor = filaPar.retirar();
            std::cout << "Retirado da fila par: " << valor << std::endl;

            if (valor > 0) {
                pilha.empilhar(valor);
            } else if (!pilha.vazia()) {
                pilha.desempilhar();
            }
        }

        turnoImpar = !turnoImpar;  // Alterna entre ímpar e par
    }

    // Exibir o conteúdo da pilha
    std::cout << "Conteúdo final da pilha: ";
    pilha.imprimir();

    return 0;
}
