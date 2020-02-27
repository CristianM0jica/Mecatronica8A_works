//16.Desarrollar un algoritmo que determine en un conjunto de 100 numeros naturales:
//-¿Cuántos son menores de 15?
//-¿Cuántos son mayores de 50?
//-¿Cuantos están comprendidos entre 25 y 45?

#include <iostream>
using namespace std;

int m15 = 0;
int m50 = 0;
int entre = 0;
int num = 0;

void ingreso (){
    cin>>num;
return;
}

void ciclo (){
    for (int i = 0; i < 100; i++)
    {
        ingreso();
        if (num < 15)
        {
            m15 = m15 + 1;
        }
        if (num > 50)
        {
            m50 = m50 + 1;
        }
        if (num >=25 && num <=45 )
        {
            entre = entre + 1;
        }        
    } 
}

int main(){
cout<<"Ingrese 100 números naturales"<<endl;
ciclo();
cout<<"Los números menores a 15 fueron: "<<m15<<endl;
cout<<"Los números mayores a 50 fueron: "<<m50<<endl;
cout<<"Los números entre 25 y 45 fueron: "<<entre<<endl;
return 0;
}