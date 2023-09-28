#include <iostream>

using namespace std;

int main() {
    int numero, original, reverso = 0;
   
    cout << "Digite um número inteiro: ";
    cin >> numero;

    original = numero; 

    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    if (original == reverso) {
        cout << "O número " << original << " é um palíndromo." << endl;
    } else {
        cout << "O número " << original << " não é um palíndromo." << endl;
    }

    return 0;
}