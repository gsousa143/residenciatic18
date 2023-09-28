#include <iostream>
#include <limits>
using namespace std;

int main(void){
    int menorValorInt = numeric_limits<int>::min();
    int maiorValorInt = numeric_limits<int>::max();
    cout << "Menor valor de uma variavel do tipo int: " << menorValorInt << endl;
    cout << "Maior valor de uma variavel do tipo int: " << maiorValorInt << endl;
    return 0;
}