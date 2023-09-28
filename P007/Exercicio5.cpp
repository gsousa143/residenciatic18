#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Configurar a semente do gerador de números aleatórios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gerar um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;

    do {
        // Solicitar ao usuário um palpite
        cout << "Tente adivinhar o número (entre 1 e 100): ";
        cin >> palpite;

        tentativas++;

        if (palpite == numeroSecreto) {
            cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas." << endl;
        } else if (palpite < numeroSecreto) {
            cout << "Tente novamente. Seu palpite está baixo." << endl;
        } else {
            cout << "Tente novamente. Seu palpite está alto." << endl;
        }

    } while (palpite != numeroSecreto);

    return 0;
}
