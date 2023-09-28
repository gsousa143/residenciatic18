#include <iostream>
using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);


int main(void){
    int tamanho, max, min;
    cout << "Digite o tamanho do vetor:" << endl;
    cin >> tamanho;
    int array[tamanho];
    for(int i=0;i<tamanho;i++){
        array[i] = rand()%tamanho+1;
        cout << array[i] << endl;
    }
    maxmin(array, tamanho, max, min);
    cout << "O maximo é: " << max << "\t o minimo é: " << min << endl;

    return 0;
}

void maxmin(int vetor[], int n, int &maximo, int &minimo){
	maximo = vetor[0];
	minimo = vetor[0];
	for(int i=1;i<n;i++){
		if(vetor[i]>maximo)
			maximo = vetor[i];
		else if(vetor[i]<minimo)
			minimo = vetor[i];
	}
}