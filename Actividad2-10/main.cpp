#include <iostream>

using namespace std;

int main()
{
    int resultados[100];
    int numero,suma=0,log=1,cont=0,cont2=0,total=0;
    cin>>numero;
    int i=0;
    while(numero>0){
        if(cont>=3){
            cont=0;
            resultados[cont2]=suma;
            suma=0;
            cont2++;
        }
        if (i>=3){
            i=0;
            log=1;
        }
        int digito=numero%10;
        numero=numero/10;
        suma=suma+(log*digito);
        cont++;
        i++;
        log=log*10;
    }
    if (cont > 0) {
        resultados[cont2] = suma;
        cont2++;
    }
    cout << "\nGrupos guardados en el arreglo:" << endl;
    for (int j = 0; j < cont2; j++) {
        cout << "Posicion [" << j << "]: " << resultados[j] << endl;
        total=resultados[j]+total;}
    cout<<"El total de la suma es"<<total<<endl;



    return 0;
}
