#include "Pilha.hpp"
#include <iostream>

Pilha::Pilha() {
    topo = nullptr;
}

Pilha::~Pilha() {
    while (!vazia()) {
        desempilhar();
    }
}

void Pilha::empilhar(int valor) {
    Elemento* novo = new Elemento;
    novo->valor = valor;
    novo->proximo = topo;
    topo = novo;
}

int Pilha::desempilhar() {
    if (vazia()) {
        std::cerr << "Erro: Pilha vazia!" << std::endl;
        return -1;
    }

    int valor = topo->valor;
    Elemento* temp = topo;
    topo = topo->proximo;
    delete temp;
    return valor;
}

bool Pilha::vazia() {
    return topo == nullptr;
}

void Pilha::imprimir() {
    Elemento* atual = topo;
    while (atual != nullptr) {
        std::cout << atual->valor << " ";
        atual = atual->proximo;
    }
    std::cout << std::endl;
}
