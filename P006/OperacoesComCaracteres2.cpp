#include <iostream>

using namespace std;


int main() {
    // Passo A: Peça ao usuário para fornecer dois números inteiros e obtenha-os
    int num1, num2;
    cout << "Digite 2 números inteiros: " << endl;
    cin >> num1 >> num2;


    
    (num1 > num2) ? cout << num1 << " e maior" : ((num2 > num1) ? cout << num2 << " e maior" : cout << "Estes números são iguais");

    
    int maior = (num1 > num2) ? num1 : num2;
    if (maior % 2 == 0) {
        cout << " e é par." << endl;
    } else {
        cout << " e é ímpar." << endl;
    }

    return 0;
}