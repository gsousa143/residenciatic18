#include <iostream>

using namespace std;

int main(){
    double r;
    const double pi = 3.1415926535;
    cout << "Digite o raio da circunferencia" << endl;
    cin >> r;

    cout << "O diametro e: " << 2*r << endl;
    cout << "O perimetro e: " << 2*pi*r << endl;
    cout << "A area e: " << pi*r*r << endl;
    return 0;

}