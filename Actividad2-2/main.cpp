#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingresa caracteres"<<endl;
    char A;
    int contador=0,cont=0;
    char arreglo[200],copiaarreglo[27];
    cin>>arreglo;

    for(int h=0;arreglo[h]!='\0';h++){
        if (arreglo[h] >= 'a' && arreglo[h] <= 'z') {
            arreglo[h] = arreglo[h] - 32;
        }
    }

    return 0 ;
}