//17. Sumar una secuencia de enteros detectando si están ordenados.

#include <iostream>
using namespace std;

int num1 = 0;
int num2 = 0;
int suma = 0;

void registro (){
    cin>>num1;
return;
}

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        registro();
        if (num1 > num2)
        {
            num2 = num1;
            suma = num2 + suma;
        }
        else
        {
            cout<<"La suma no se podrá hacer porque los números que ingresaste no están ordenados"<<endl;
            return;
        }        
    }
return;    
}

int main(){
    cout<<"Ingrese 10 números enteros"<<endl;
    ciclo();
    cout<<"La suma de sus números es: "<<suma<<endl;
return 0;
}