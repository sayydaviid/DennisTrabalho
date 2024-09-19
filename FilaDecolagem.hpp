#ifndef FILADECOLAGEM_HPP
#define FILADECOLAGEM_HPP

#include "Aviao.hpp"
#include <queue>

// Definição da classe FilaDecolagem (TAD Fila)
class FilaDecolagem {
private:
    std::queue<Aviao> fila;

public:
    void adicionarAviao(const Aviao &aviao);
    void autorizarDecolagem();
    void listarAvioes() const;
    void listarPrimeiroAviao() const;
};

#endif
