#include <iostream>
using namespace std;

// Paso por VALOR (recibe una copia)

void sumarReferencia(char arra[]);



int main() {
    char y[100];
    cin>>y  ;
    sumarReferencia(y);
    cout << "Despues de sumarReferencia: " << y << endl; // Cambia a 15

    return 0;
}
void sumarReferencia(char arra[]){
    for(int h=0;arra[h]!='\0';h++){

    }
}
