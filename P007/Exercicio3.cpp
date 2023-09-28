#include <iostream>

using namespace std;

int main() {
    int numero;

    // Passo A: Peça ao usuário para digitar um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Divisores de " << numero << ": ";

    // Passo B: Encontre e imprima todos os divisores
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
