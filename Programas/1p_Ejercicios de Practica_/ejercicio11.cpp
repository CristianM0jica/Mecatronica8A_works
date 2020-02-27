//11. Diseñar un diagrama que permita realizar un contador e imprimir los cien primeros números enteros.

#include <iostream>
using namespace std;

int num = 0;

void contador (){
    for (int i = 0; i < 100; i++)
    {
        num = num + 1;
        cout<<num<<endl;
    }
return;   
}

int main(){
    cout<<"El contador ha iniciado"<<endl;
    contador();
return 0;
}