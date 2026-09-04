#include <iostream>

using namespace std;

int main()
{
    char cadena[100];
    int contador=0,numero=0,contador10=1,entero=0;
    cout<<"Introduce tu cadena de caracteres numericos"<<endl;
    cin>>cadena;
    for(int h=0;cadena[h]!='\0';h++){
        contador++;
    contador10=contador10*10;}
    contador10 = contador10 / 10;
    for(int h=0;cadena[h]!='\0';h++){
        for(int i=48;i<58;i++){
            char resultado=(char)i;
             entero=i-48;
            if(cadena[h]==resultado){
                numero=numero+(entero*contador10);
            }
        }
        contador10 = contador10 / 10;
    }
    cout<<"ESte es la cadena"<<cadena<<"ESte es el entero"<<numero;
    return 0;
}
