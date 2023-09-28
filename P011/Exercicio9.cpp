#include <iostream>
using namespace std;

float calc_serie(int N){
    float s = 0;
    for (int i=0;i<N;i++)
        s += (i+1)/(N-i);
    for (int i=0;i<N;i++)
        s+= (N-i)/(i+1);
    return s;
}

int main(void){
    int N;
    cout  << "Digite um numero:" << endl;
    cin >> N;
    float s = calc_serie(N);
    cout << "N: " << N <<  endl;
    cout << "s: " << s << endl;
}
