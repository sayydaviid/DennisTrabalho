#include "FilaDecolagem.hpp"
#include <iostream>

void FilaDecolagem::adicionarAviao(const Aviao &aviao) {
    fila.push(aviao);
}

void FilaDecolagem::autorizarDecolagem() {
    if (!fila.empty()) {
        cout << "Autorizando decolagem do aviao: ";
        fila.front().exibirDados();
        fila.pop();
    } else {
        cout << "Nenhum aviao na fila de espera." << endl;
    }
}

void FilaDecolagem::listarAvioes() const {
    if (fila.empty()) {
        cout << "Nenhum aviao na fila de espera." << endl;
        return;
    }
    std::queue<Aviao> temp = fila;
    while (!temp.empty()) {
        temp.front().exibirDados();
        temp.pop();
    }
}

void FilaDecolagem::listarPrimeiroAviao() const {
    if (!fila.empty()) {
        cout << "Primeiro aviao na fila: ";
        fila.front().exibirDados();
    } else {
        cout << "Nenhum aviao na fila de espera." << endl;
    }
}
