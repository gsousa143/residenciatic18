#include <iostream>

using namespace std;

int main(){
    int num, somaDivisores = 0;
    cout << "Digite um inteiro" << endl;
    cin >> num;
    for(int i=1;i<num;i++){
        if(num%i == 0)
            somaDivisores += i;
    }

    cout <<"O numero " << num << (num==somaDivisores ? " eh perfeito":" nao eh perfeito") << endl ;
    return 0;
}