#include <iostream>

using namespace std;

int main(){
    int tamanho;
    char c = '*';
    cout << "Digite o tamanho"<< endl;
    cin >> tamanho;
    for(int i = 0;i<tamanho;i++){
        for(int j = 0;j<tamanho;j++){
            cout << c << "\t";
        }
        cout << endl;
    }

    cout << endl << endl;

    for(int i = 0;i<tamanho;i++){
        for(int j = 0;j<tamanho;j++){
            if (i>=j)
                cout << c << "\t";
            else 
                cout << " \t"; 
        }
        cout << endl;
    }

    cout << endl << endl;

    for(int i = 0;i<tamanho;i++){
        for(int j = 0;j<tamanho;j++){
            if ((i==tamanho-1)||(j==tamanho-1)||(i==0)||(j==0))
                cout << c << "\t";
            else
                cout << " \t"; 
         }
        cout << endl;
    }
    return 0;
}