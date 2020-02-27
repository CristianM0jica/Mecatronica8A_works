//8.Sumar diez números introducidos por el teclado.
#include <iostream>
using namespace std;

int num = 0;
double suma = 0;

void ingreso(){
    cin>>num;
    return;
}

void ciclo(){
    for (int i = 0; i < 10; i++)
    {
        ingreso();
        suma = suma + num;
    }
return;
}

int main(){
    cout<<"Ingresa 10 números"<<endl;
    ciclo();
    cout<<"La suma de tus 10 número es igual a "<<suma<<endl;
return 0;
}