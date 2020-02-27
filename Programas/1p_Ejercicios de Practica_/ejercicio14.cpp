//14. Escribir la suma de los diez primeros numeros pares.

#include <iostream>
using namespace std;

int num = 0;
int suma = 0;
int tmp = 0;

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        num = num + 1;
        tmp = num % 2;
        if (tmp == 0)
        {
            suma = suma + num;
        }
        else
        {
            i= i-1;
        }        
    }
return;   
}

int main(){
    ciclo();
    cout<<"La suma de los primeros 10 números pares es: "<<suma<<endl;
return 0;
}