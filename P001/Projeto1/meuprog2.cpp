#include <iostream>

using namespace std;

int main(void){
    int a, b;
    cout << "Digite um numero inteiro: ";
    cin >> a;
    cout << "Digite outro numero inteiro: ";
    cin >> b;
    cout << "Soma = " << a+b << endl;
    cout << "Subtracao = " << a-b << endl;
    cout << "Multiplicacao = " << a*b << endl;
    cout << "Divisao = " << a/b << endl;
    cout << "Resto = " << a%b << endl;
    return 0;
}