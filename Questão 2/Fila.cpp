#include "Fila.hpp"
#include <iostream>

Fila::Fila() {
    frente = nullptr;
    tras = nullptr;
}

Fila::~Fila() {
    while (!vazia()) {
        retirar();
    }
}

void Fila::inserir(int valor) {
    Node* novo = new Node;
    novo->valor = valor;
    novo->proximo = nullptr;

    if (vazia()) {
        frente = novo;
        tras = novo;
    } else {
        tras->proximo = novo;
        tras = novo;
    }
}

int Fila::retirar() {
    if (vazia()) {
        std::cerr << "Erro: Fila vazia!" << std::endl;
        return -1;
    }

    int valor = frente->valor;
    Node* temp = frente;
    frente = frente->proximo;
    delete temp;
    return valor;
}

bool Fila::vazia() {
    return frente == nullptr;
}
