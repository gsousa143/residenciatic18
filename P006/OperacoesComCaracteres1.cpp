#include <iostream>

using namespace std;


int main() {
    char ch1, ch2, ch3;
    
    cout << "Digite 2 caracteres: ";
    cin >> ch1 >> ch2;

    ch3 = ch1 - 1;

    if (ch3 >= 32 && ch3 <= 126) {
       
        cout << "Caractere em formato decimal: " << int(ch3) << endl;
        cout << "Caractere em formato octal: " << oct << int(ch3) << endl;
        cout << "Caractere em formato hexadecimal: " << hex << int(ch3) << endl;
        cout << "Caractere: " << ch3 << endl;
    } else {
        // Caso ch3 não seja um caractere imprimível, substitua por '_'
        ch3 = '_';
        cout << "O caractere ch3 não é imprimível, substituído por '_'" << endl;
    }

    return 0;
}