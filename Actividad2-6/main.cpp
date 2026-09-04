#include <iostream>

using namespace std;
void funcioncadena(int number,char copia[],int limit);
int main()
{
    int numero;
    char arreglo[100];
    cout<<"Ingresa el número"<<endl;
    cin>>numero;
    int y=0;
    int copnumero=0;
    copnumero=numero;
    while (copnumero > 0) {
        int digito = copnumero % 10;
        copnumero=copnumero/10;
        y++;
    }
    funcioncadena(numero,arreglo,y);
        cout<<arreglo;
    return 0;
}

void funcioncadena(int number,char copia[], int limit){
int i = limit;
    copia[i]='\0';
    while (number > 0) {
        int digito = number % 10;
        copia[i-1] = digito + 48;
        number = number / 10;
        i--;
    }
}