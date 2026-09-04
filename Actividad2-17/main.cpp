#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;
    int suma_total = 0;
    for (int limite = 1; limite < N; limite++) {
        int b = 0;
        int suma_a = 0;
        int suma_b = 0;
        for (int i = 1; i <= limite / 2; i++) {
            if (limite % i == 0) {
                suma_a += i;
            }
        }
        b = suma_a;
        for (int h = 1; h <= b / 2; h++) {
            if (b % h == 0) {
                suma_b += h;
            }
        }
        if (suma_b == limite && limite != b) {
            suma_total += limite;
        }
    }
    cout << "El resultado de la suma es: " << suma_total << endl;

    return 0;
}