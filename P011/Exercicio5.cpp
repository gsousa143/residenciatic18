#include <iostream>

using namespace std;

int insere_meio(int *vetor, int qtde, int elemento) {
    if (qtde % 2 == 0) {
        int posicao = qtde / 2;
        for (int i = qtde; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicao] = elemento;
        return qtde + 1;
    } else {
        int posicao = qtde / 2 + 1;
        for (int i = qtde; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicao] = elemento;

        return qtde + 1;
    }
}

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int novoElemento = 100;
    qtde = insere_meio(vetor, qtde, novoElemento);

    cout << "Vetor após a inserção: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}