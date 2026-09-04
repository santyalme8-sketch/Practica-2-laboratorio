#include <iostream>

using namespace std;

int main()
{
    cout<<"ESte programa te permite cambiar de minusculas a mayusculas"<<endl;
    char arreglo[100],arreglorig[100];
    int numero,h=0;
    cout<<"Introduce la frase que quieras"<<endl;
    cin.getline(arreglorig, 100);
    for( h=0;arreglorig[h]!='\0';h++){
        int evalua=(int)arreglorig[h];
        if((evalua>=97)&&(evalua<=122)){
            arreglo[h]=evalua-32;
        }
        else{
            arreglo[h]=evalua;
        }
    }
    arreglo[h]='\0';
    cout<<arreglo;
    return 0;
}
