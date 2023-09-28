#include <iostream>
using namespace std;


void soma_subtracao(int &x,int &y){
    int temp1 = x+y;
    int temp2 = x-y;
    x = temp1;
    y = temp2;
}

int main(void){
    int x, y;
    cout << "Digite um numero inteiro: " << endl;
    cin >> x;
    cout << "Digite outro numero inteiro: " << endl;
    cin >> y;
    cout << "x: " << x << endl << "y: " << y << endl;
    soma_subtracao(x,y);
    cout << "x: " << x << endl << "y: " << y << endl;
    return 0;
}