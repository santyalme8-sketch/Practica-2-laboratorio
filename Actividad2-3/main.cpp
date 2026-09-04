#include <iostream>

using namespace std;

int main()
{
    int contador1=0,contador2=0;
    char primercadena[100],segundacadena[100];
    cout<<"Introduce la primer cadena de caracteres"<<endl;
    cin>>primercadena;
    cout<<"Introduce la segunda cadena de caracteres"<<endl;
    cin>>segundacadena;
    for(int i=0;;i++){
        if(primercadena[i]=='\0'){
            break;
        }
        contador1++;
    }
    for(int i=0;;i++){
        if(segundacadena[i]=='\0'){
            break;
        }
        contador2++;
        }
    if(contador1==contador2){
            for(int h=0;h<contador1;h++){
            if(primercadena[h]!=segundacadena[h]){
                    cout<<"No son la misma cadena de caracteres"<<endl;
                return 0;
            }
            }
    }
    else if (contador1!=contador2){
        cout<<"No son la misma cadena";
        return 0;
    }
    cout<<"Si son la misma cadena";
    return 0;
}
