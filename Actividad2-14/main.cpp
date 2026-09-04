#include <iostream>

using namespace std;

int main() {
    int matriz[5][5];
    int matrizrotada[5][5];
    int matrizrotada270[5][5];
    int contador = 1;
    for (int fila = 0; fila < 5; fila++) {
        for (int col = 0; col < 5; col++) {
            matriz[fila][col] = contador;
            contador++;
        }
    }
    for (int fila = 0; fila < 5; fila++) {
        for (int col = 0; col < 5; col++) {
            if (matriz[fila][col] < 10) {
                cout << " " << matriz[fila][col] << " ";
            } else {
                cout << matriz[fila][col] << " ";
            }
        }
        cout << endl;
    }
    for (int fila = 0; fila < 5; fila++) {
        for (int col = 0; col < 5; col++) {
            matrizrotada[col][4 - fila] = matriz[fila][col];
        }
    }
    cout<<"matriz rotada a 90 grados"<<endl;
    for (int fila = 0; fila < 5; fila++) {
        for (int col = 0; col < 5; col++) {

            if (matrizrotada[fila][col] < 10) {
                cout << " " << matrizrotada[fila][col] << " ";
            } else {
                cout << matrizrotada[fila][col] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}