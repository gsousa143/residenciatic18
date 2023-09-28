#include <iostream>
#include <string>
using namespace std;

string caracteres_comuns(const string& A, const string& B) {
    string resultado;

    for (char letra : A) {
        if (B.find(letra) != string::npos && resultado.find(letra) == string::npos) {
            resultado += letra;
        }
    }

    return resultado;
}

int main() {
    string A = "abcdhijef";
    string B = "defgklm";

    string C = caracteres_comuns(A, B);

    cout << "Caracteres comuns em A e B: " << C << endl;

    return 0;
}