#include <iostream>

using namespace std;

bool isPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    if (numero <= 3) {
        return true;
    }

    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;
    
    for (int i = 0; i < qtde; i++) {
        if (isPrimo(vet[i])) {
            contador++;
        }
    }
    
    return contador;
}

int main(void) {
    int vetor[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = 9;

    int qtdePrimos = conta_primos(vetor, qtde);

    cout << "Quantidade de números primos no vetor: " << qtdePrimos << endl;

    return 0;
}