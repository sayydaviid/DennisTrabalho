#ifndef AVIAO_HPP
#define AVIAO_HPP

#include <string>
using namespace std;

// Definição da classe Aviao (TAD Aviao)
class Aviao {
private:
    string nome;
    int identificador;
    string companhia;
    string destino;

public:
    Aviao(string nome, int identificador, string companhia, string destino);

    string getNome() const;
    int getIdentificador() const;
    string getCompanhia() const;
    string getDestino() const;

    void exibirDados() const;
};

#endif
