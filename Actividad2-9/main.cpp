#include <iostream>

using namespace std;

int main()
{
    char original[100],letras[100],numeros[100],otros[100];
    int cont1=0,cont2=0,cont3=0;
    cin>>original;
    for(int h=0;original[h]!='\0';h++){
        if((original[h]>=97 && original[h]<=122)||(original[h]>=65 && original[h]<=90)){
            letras[cont1]=original[h];
            cont1++;
        }
        else if ((original[h]>=48)&&(original[h]<=57)){
            numeros[cont2]=original[h];
           cont2++;}
        else{
            otros[cont3]=original[h];
            cont3++;}
    }
    cout<<"Estos son las letras del programa:"<<letras<<"\nEstos son los numeros:"<<numeros<<"\nOtras cosas dentro:"<<otros;
    return 0;
}
