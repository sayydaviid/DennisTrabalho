#include "Aviao.hpp"
#include <iostream>

Aviao::Aviao(string nome, int identificador, string companhia, string destino) 
    : nome(nome), identificador(identificador), companhia(companhia), destino(destino) {}

string Aviao::getNome() const {
    return nome;
}

int Aviao::getIdentificador() const {
    return identificador;
}

string Aviao::getCompanhia() const {
    return companhia;
}

string Aviao::getDestino() const {
    return destino;
}

void Aviao::exibirDados() const {
    cout << "Aviao " << nome << " (ID: " << identificador << "), Companhia: " << companhia << ", Destino: " << destino << endl;
}
