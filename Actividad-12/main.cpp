#include <iostream>

using namespace std;
int letraANumero(char c);
int main()
{
    bool flag_menu=true;
    int columna;
    char letra[5];
    char asientos[15][20];
    for(int h=0;h<15;h++){
        for(int j=0;j<20;j++){
            asientos[h][j]='-';
        }
    }
    cout << "   ";
    for(int j = 1; j <= 20; j++){
        if(j < 10) {
            cout << "  " << j;}
        else {
            cout << " " << j;}
    }
    cout << endl;
    for(int h=0; h<15; h++){
        cout << (char)('A' + h) << "  ";
        for(int j=0; j<20; j++){
            cout << "  " << asientos[h][j];
        }
        cout << endl;
    }
    while (flag_menu){
        int control;
        cout<<"Elige 1 para hacer una reserva\nElige 2 Para cancelar una reserva\nElige 3 para salir\nElige 4 para ver las reservas actuales\n";
        cin>>control;
        switch (control) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            flag_menu=false;
            break;
        case 4:
            break;
        default:
            break;
        }
        if (control==1){
            cout<<"Ingresa una fila de la A a la O para esocoger la fila"<<endl;
            cin>>letra;
            while((letra[1]!='\0')||!(letra[0]>=65&&letra[0]<=79 || letra[0]>=97&&letra[0]<=111)){
                cout<<"Ese dato no es valido, por favor ingrsa de la a hasta la o"<<endl;
                cin>>letra;
            }
            int num=letraANumero(letra[0]);
            cout<<"elegiste la fila"<<letra<<endl;
            cout<<"Por favor escoge el asiento del 1 al 20"<<endl;
            cin>>columna;
            while (columna<=0 || columna>20){
                cout<<"Por favor escoge el asiento del 1 al 20"<<endl;
                cin>>columna;
            }
            if (asientos[num-1][columna-1]=='+'){
                cout<<"Este asiento ya esta acopuado"<<endl;}
            else if (asientos[num-1][columna-1]=='-'){
                asientos[num-1][columna-1]='+';
            }
        }
        else if (control==2){
            cout<<"Ingresa una fila de la A a la O para esocoger la fila"<<endl;
            cin>>letra;
            int num=letraANumero(letra[0]);
            cout<<"elegiste la fila"<<letra<<endl;
            cout<<"Por favor escoge el asiento del 1 al 20"<<endl;
            cin>>columna;
            while (columna<=0 || columna>20){
                cout<<"Por favor escoge el asiento del 1 al 20"<<endl;
                cin>>columna;
            }
            if (asientos[num-1][columna-1]=='+'){
                cout<<"Ya se borro la reserva"<<endl;
                asientos[num-1][columna-1]='-';
            }
            else if (asientos[num-1][columna-1]=='-'){
                cout<<"Este asiento ya esta desocupado"<<endl;
            }
        }
        else if(control==3){
            cout<<"chau";
            return 0;}
        else if(control==4){
            cout << "   ";
            for(int j = 1; j <= 20; j++){
                if(j < 10) {
                    cout << "  " << j;}
                else {
                    cout << " " << j;}
            }
            cout << endl;
            for(int h=0; h<15; h++){
                cout << (char)('A' + h) << "  ";
                for(int j=0; j<20; j++){
                    cout << "  " << asientos[h][j];
                }
                cout << endl;
            }
        }
    }
}

int letraANumero(char c) {
    if (c == 'A' || c == 'a') return 1;
    if (c == 'B' || c == 'b') return 2;
    if (c == 'C' || c == 'c') return 3;
    if (c == 'D' || c == 'd') return 4;
    if (c == 'E' || c == 'e') return 5;
    if (c == 'F' || c == 'f') return 6;
    if (c == 'G' || c == 'g') return 7;
    if (c == 'H' || c == 'h') return 8;
    if (c == 'I' || c == 'i') return 9;
    if (c == 'J' || c == 'j') return 10;
    if (c == 'K' || c == 'k') return 11;
    if (c == 'L' || c == 'l') return 12;
    if (c == 'M' || c == 'm') return 13;
    if (c == 'N' || c == 'n') return 14;
    if (c == 'O' || c == 'o') return 15;

    return -1;
}