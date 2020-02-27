//3. Calcular y visualizar la suma y el producto de los números pares comprendidos entre 20 y 400, 
//ambos inclusive.

#include <iostream>
using namespace std;

int suma = 0;
float producto = 1;
int num = 0;
int tmp = 0;

void ciclo (){
    for (num = 20; num <= 400; num++)
    {
        tmp = num % 2;
        if (tmp == 0)
        {
            cout<<num<<endl;
            suma = suma + num;
            producto = producto * num;
        }
    }
return;
}

int main(){

ciclo();
cout<<"La suma de los números pares comprendidos entre 20 y 400 es "<<suma<<endl;
cout<<"El producto de los números pares comprendidos entre 20 y 400 es "<<producto<<endl;

return 0;
}