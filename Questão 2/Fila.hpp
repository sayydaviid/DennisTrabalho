#ifndef FILA_HPP
#define FILA_HPP

struct Node {
    int valor;
    Node* proximo;
};

class Fila {
private:
    Node* frente;
    Node* tras;

public:
    Fila();
    ~Fila();

    void inserir(int valor);
    int retirar();
    bool vazia();
};

#endif // FILA_HPP
