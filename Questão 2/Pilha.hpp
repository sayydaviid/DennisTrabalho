#ifndef PILHA_HPP
#define PILHA_HPP

struct Elemento {
    int valor;
    Elemento* proximo;
};

class Pilha {
private:
    Elemento* topo;

public:
    Pilha();
    ~Pilha();

    void empilhar(int valor);
    int desempilhar();
    bool vazia();
    void imprimir();
};

#endif // PILHA_HPP
