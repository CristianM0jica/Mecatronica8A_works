//10. Calcular los N primeros múltiplos de 4 (4 inclusive), donde N es un valor e introducido por teclado.

#include <iostream>
using namespace std;

int n = 0;
int multiplo = 0;
int tmp = 1;

void ingreso (){
    cin>>n;
return;
}

void ciclo (){
    ingreso();
    cout<<"Los múltiplos son:"<<endl;
    for (int i = 0; i < n; i++)
    {
        multiplo = 4 * tmp++;
        cout<<multiplo<<endl;
    }
return;
}

int main(){
    cout<<"Ingrese la cantidad de múltiplos de 4 que desee"<<endl;
    ciclo();
return 0;
}