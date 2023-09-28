#include <iostream>
#include <limits>
using namespace std;

int main(void){
    //b
    unsigned long int uli = numeric_limits<unsigned long int>::max();
    cout << "Maior valor de uma variavel do tipo unsigned long int: " << uli << endl;
    cout << "Menor valor de uma variavel do tipo unsigned long int: " << numeric_limits<unsigned long int>::min() << endl;
    //c
    long int li = uli;
    uli = li;
    cout << "li: "<< li << endl;
    cout << "uli: "<< uli << endl;
    //comentario explicando o resultado
    //d
    li = numeric_limits<long int>::max();
    cout << "Maior valor de uma variavel do tipo long int: " << li << endl;
    cout << "Menor valor de uma variavel do tipo long int: " << numeric_limits<long int>::min() << endl;
    //e
    unsigned int ui = li;
    li = ui;
    cout << "ui: "<< ui << endl;
    cout << "li: "<< li << endl;
    //comentario explicando o resultado
    //f
    ui = numeric_limits<unsigned int>::max();
    cout << "Maior valor de uma variavel do tipo unsigned int: " << ui << endl;
    cout << "Menor valor de uma variavel do tipo unsigned int: " << numeric_limits<unsigned int>::min() << endl;
    return 0;
}