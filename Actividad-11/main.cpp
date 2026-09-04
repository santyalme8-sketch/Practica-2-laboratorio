#include <iostream>
using namespace std;


int valorRomano(char c);


int main() {
    char romano[100];
    int total = 0;
    bool esValido = true;

    cout << "Ingresa un numero romano: ";
    cin >> romano;
    int repetidos = 1;
    for (int i = 1; romano[i] != '\0'; i++) {
        if (romano[i] == romano[i - 1]) {
            repetidos++;
            if (repetidos > 3) {
                esValido = false;
                break;
            }
        } else {
            repetidos = 1;
        }
    }
    if (!esValido) {
        cout << "Error: El numero ingresado no es valido (tiene mas de 3 caracteres repetidos)." << endl;
        return 0;
    }

    for (int h = 0; romano[h] != '\0'; h++) {
        int valorActual = valorRomano(romano[h]);
        int valorSiguiente = 0;

        if (romano[h + 1] != '\0') {
            valorSiguiente = valorRomano(romano[h + 1]);
        }

        if (valorActual >= valorSiguiente) {
            total = total + valorActual; // Regla (a)
        } else {
            total = total - valorActual; // Regla (b)
        }
    }
    cout << "El numero ingresado fue: " << romano << endl;
    cout << "Que corresponde a: " << total << "." << endl;

    return 0;
}
int valorRomano(char c) {
    if (c == 'M' || c == 'm') return 1000;
    if (c == 'D' || c == 'd') return 500;
    if (c == 'C' || c == 'c') return 100;
    if (c == 'L' || c == 'l') return 50;
    if (c == 'X' || c == 'x') return 10;
    if (c == 'V' || c == 'v') return 5;
    if (c == 'I' || c == 'i') return 1;
    return 0; }