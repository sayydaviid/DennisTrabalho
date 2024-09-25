#include "FilaDecolagem.hpp"
#include <iostream>
using namespace std;

int main() {
    FilaDecolagem fila;
    int opcao;
    string nome, companhia, destino;
    int identificador;

    do {
        cout << "Bem vindo ao aeroporto David Tavares e Guilherme Sandim, cujo numero de matricula é: 202311140028 & 202311140021" << endl;
        cout << "\nControle de Decolagem" << endl;
        cout << "1. Listar numero de avioes na fila" << endl;
        cout << "2. Autorizar decolagem do primeiro aviao" << endl;
        cout << "3. Adicionar um aviao à fila" << endl;
        cout << "4. Listar todos os avioes na fila" << endl;
        cout << "5. Mostrar o primeiro aviao da fila" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Numero de avioes na fila de espera: " << endl;
                fila.listarAvioes();
                break;
            case 2:
                fila.autorizarDecolagem();
                break;
            case 3:
                cout << "Digite o nome do aviao: ";
                cin >> nome;
                cout << "Digite o identificador do aviao: ";
                cin >> identificador;
                cout << "Digite a companhia aerea: ";
                cin >> companhia;
                cout << "Digite o destino: ";
                cin >> destino;
                fila.adicionarAviao(Aviao(nome, identificador, companhia, destino));
                cout << "Aviao adicionado à fila de espera!" << endl;
                break;
            case 4:
                fila.listarAvioes();
                break;
            case 5:
                fila.listarPrimeiroAviao();
                break;
            case 0:
                cout << "Encerrando sistema." << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
