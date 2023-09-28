#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    char c;
    cout << "Digite um caracter qualquer:";
    cin >> c;
    cout << "Num - ASCII - OCT - HEX"<<endl;
    cout << c << " - " << int(c) << " - " << oct << int(c) << " - " << hex << int(c) << endl;
    return 0;
}