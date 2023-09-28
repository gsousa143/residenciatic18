#include <iostream>
#include <vector>

using namespace std;

void encontra_letra(const string& texto, char letra, int*& indices, int& tamanho) {
    vector<int> posicoes;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            posicoes.push_back(i);
        }
    }

    tamanho = posicoes.size();

    if (tamanho > 0) {
        indices = new int[tamanho];
        for (int i = 0; i < tamanho; i++) {
            indices[i] = posicoes[i];
        }
    } else {
        indices = nullptr;
    }
}

int main() {
    string texto = "residencia";
    char letra = 'e';

    int* indices;
    int tamanho;

    encontra_letra(texto, letra, indices, tamanho);

    cout << "Posições da letra '" << letra << "': ";
    for (int i = 0; i < tamanho; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    delete[] indices;

    return 0;
}
