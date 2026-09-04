#include <iostream>
using namespace std;

int main() {
    char original[100];
    char resultado[100];
    int pos = 0;

    cout << "Ingrese una palabra: ";
    cin >> original;
    for (int i = 0; original[i] != '\0'; i++) {
        bool repetido = false;
        for (int j = 0; j < pos; j++) {
            if (original[i] == resultado[j]) {
                repetido = true;
                break;
            }
        }
        if (repetido == false) {
            resultado[pos] = original[i];
            pos++;
        }
    }
    resultado[pos] = '\0';
    cout << "Original: " << original << ". Sin repetidos: " << resultado << "." << endl;

    return 0;
}