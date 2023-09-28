#include <iostream>


using namespace std;

int main() {
    // Passo A: Declare três variáveis do tipo int
    int a, b, c;

    
    cout << "Digite 2 numeros inteiros: " << endl;
    cin >> a >> b;

    c = 4*a + b/3 - 5;
    cout << "4 * a + b / 3 - 5 =  " << c << endl;

    c = 4*(a + b)/(3 - 5);
    cout << "4 * (a + b) / (3 - 5) = " << c << endl;

    // Os resultados são diferentes porque a ordem das operações  é diferente nas duas expressões.
    // Na primeira expressão, 4 * a é calculado primeiro, seguido por b / 3 e, finalmente, subtrai-se 5.
    // Na segunda expressão, a e b são somados primeiro, depois 4 * (a + b) é calculado e, finalmente, divide-se por (3 - 5).

    int d = 4*a + (b /(3 - 5));
    cout << "4 * a + (b / (3 - 5)) = " << d << endl;

    d = a*a + 2*b + c;
    cout << "a^2 + 2b + c = " << d << endl;

    return 0;
}