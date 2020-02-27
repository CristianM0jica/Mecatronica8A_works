//12.Dados diez números enteros, visualizar la suma de los números pares de la lista, cuántos números 
//pares existen y cuál es la media aritmetica de los numeros impares.

#include <iostream>
using namespace std;

int num = 0;
int tmp = 0;
int numpares = 0;
int numinpares = 0;
int sumnumpares = 0;
int suminpar = 0;
int medimpar = 0;

void ingreso (){
    cin>>num;
return;
}

void ciclo (){
    for ( int i = 0; i < 10; i++)
    {
        ingreso();
        tmp = num%2;
        if (tmp == 0)
        {
            numpares = numpares + 1;
            sumnumpares = sumnumpares + num;
        }
        else
        {
            numinpares = numinpares + 1;
            suminpar = suminpar + num;
        }
    }
    medimpar = suminpar/numinpares;
    cout<<"La cantidad de números pares son: "<<numpares<<endl;
    cout<<"La suma de los números pares es: "<<sumnumpares<<endl;
    cout<<"La media de los números impares es: "<<medimpar<<endl;
return;    
}

int main(){
cout<< "Ingrese 10 números naturales"<<endl;
ciclo();
return 0;
}