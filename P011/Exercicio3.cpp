#include <iostream>
using namespace std;



void ordena_4numeros(float &a,float &b,float &c,float &d){
    float vetor[4] = {a,b,c,d};
    //bubble sort
    bool troca = true;
    while(troca){
        troca = false;
        for(int i =0;i<3;i++){
            if(vetor[i]>vetor[i+1]){
                swap(vetor[i],vetor[i+1]);
                troca = true;
            }
        }
    }
    a = vetor[0];
    b = vetor[1];
    c = vetor[2];
    d = vetor[3];
}


int main(void){
    float a,b,c,d;
    cout << "digite um  numero real" << endl;
    cin >> a;
    cout << "digite um  numero real" << endl;
    cin >> b;
    cout << "digite um  numero real" << endl;
    cin >> c;
    cout << "digite um  numero real" << endl;
    cin >> d;
    cout << "a "<< a << ", b " << b << ",c " << c << ", d " << d << endl;
    ordena_4numeros(a,b,c,d);
    cout << "a "<< a << ", b " << b << ",c " << c << ", d " << d << endl;
    return 0;
}
