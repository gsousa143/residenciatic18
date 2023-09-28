#include <iostream>

using namespace std;

int main(){
    double x,y;
    cout << "Digite as coordenadas do ponto x e y" << endl;
    cin >> x >> y;
    cout << (x>0 ? (y>0 ? "Primeiro":"Quarto"):(y>0 ? "Segundo": "Terceiro")) << endl;

    return 0;
}

