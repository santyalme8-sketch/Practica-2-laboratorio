#include <iostream>

using namespace std;

int main() {
    int dinero2, cincuenta = 50000, veinte = 20000, diez = 10000, cinco = 5000, dos = 2000, mil = 1000, quinientos = 500, doscientos = 200, cien = 100, cincuenta_moneda = 50;
    int faltante = 0, dinero = 0;
    int elemento;
    int precio;
    int devuelta;
    bool flaginicio = true;

    while (flaginicio) {
        cout << "\n--- MAQUINA EXPENDEDORA ---\n";
        cout << "1. Cocacola - $3500\n";
        cout << "2. Agua - $2000\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> elemento;

        switch (elemento) {
        case 1:
            cout << "\nElegiste Cocacola. Precio: $3500\n";
            precio = 3500;
            flaginicio = false;
            break;
        case 2:
            cout << "\nElegiste Agua. Precio: $2000\n";
            precio = 2000;
            flaginicio = false;
            break;
        case 3:
            cout << "Acabas de salir.\n";
            return 0;
        default:
            cout << "Opcion no valida. Intentalo nuevamente.\n";
            break;
        }
    }

    cout << "Ingresa la cantidad de dinero: ";
    cin >> dinero;
    while (dinero<=0||dinero<precio){
        if (dinero<=0){
            cout<<"No se puede ingresar valores negativos el saldo actual es de 0\rrnIntroduzca nuevamente el dinero\n";
            dinero=0;
            cin>>dinero;}
        else if (dinero<precio){
            cout<<"Este valor es inferior al precio de la bebida, por favor introduce mas dinero\nDinero actual\n"<<dinero<<"\n";
            cin>>dinero2;
            dinero=dinero+dinero2;}
    }
    devuelta=dinero-precio;
    cout<<"las devueltas son "<<devuelta<<" Pesos\n";
    int inicincuenta = 0;
    while (devuelta>=cincuenta){
        devuelta=devuelta-cincuenta;
        ++inicincuenta;
    }
    int iniveinte = 0;
    while (devuelta>=veinte){
        devuelta=devuelta-veinte;
        ++iniveinte;
    }
    int inidiez = 0;
    while (devuelta>=diez){
        devuelta=devuelta-diez;
        ++inidiez;
    }
    int inicinco = 0;
    while (devuelta>=cinco){
        devuelta=devuelta-cinco;
        ++inicinco;
    }
    int inicidos = 0;
    while (devuelta>=dos){
        devuelta=devuelta-dos;
        ++inicidos;
    }
    int inicimil = 0;
    while (devuelta>=mil){
        devuelta=devuelta-mil;
        ++inicimil;
    }
    int iniciquinientos = 0;
    while (devuelta>=quinientos){
        devuelta=devuelta-quinientos;
        ++iniciquinientos;
    }
    int inicidoscientos = 0;
    while (devuelta>=doscientos){
        devuelta=devuelta-doscientos;
        ++inicidoscientos;
    }
    int inicien = 0;
    while (devuelta>=cien){
        devuelta=devuelta-cien;
        ++inicien;
    }
    int inicincua = 0;
    while (devuelta>=cincuenta_moneda){
        devuelta=devuelta-cincuenta_moneda;
        ++inicincua;
    }
    cout<<"Las devueltas faltantes son "<<devuelta <<" Pesos\n";
    cout<<"La cantidad minima de dinero que se a devuelto son\n";
    cout<<"Billetes de 50.000 pesos:"<<inicincuenta<<endl;
    cout<<"Billetes de 20.000 pesos:"<<iniveinte<<endl;
    cout<<"Billetes de 10.000 pesos:"<<inidiez<<endl;
    cout<<"Billetes de 5.000 pesos:"<<inicinco<<endl;
    cout<<"Billetes de 2000 pesos:"<<inicidos<<endl;
    cout<<"Billetes de 1000 pesos:"<<inicimil<<endl;
    cout<<"Monedas de 500 pesos:"<<iniciquinientos<<endl;
    cout<<"Monedas de 200 pesos:"<<inicidoscientos<<endl;
    cout<<"Monedas de 100 pesos:"<<inicien<<endl;
    cout<<"Monedas de 50 pesos:"<<inicincua<<endl;
    return 0;
}