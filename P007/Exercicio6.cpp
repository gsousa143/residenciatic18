#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Digite a altura " << endl;
    cin >> altura;

    char caractere = 'A';
   
    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            cout << caractere;
            caractere++;
            if(caractere == 'Z'+1)
                caractere = 'A';
        }
        cout << endl;
    }

    return 0;
}