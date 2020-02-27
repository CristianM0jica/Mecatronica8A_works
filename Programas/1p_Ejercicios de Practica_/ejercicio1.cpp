//1. Se desea calcular independiente la suma de los números pares e impares comprendidos entre 1 y 200
#include <iostream>
using namespace std;

int sumapar = 0;
int sumainpar = 0;
int num = 0;
int tmp = 0;

void ciclo (){
    for ( num = 0; num <= 200; num++)
{
    tmp = num % 2;
    if (tmp == 0)
    {
        cout<<num<<endl;
        sumapar = sumapar + num;
    }
    else
    {
        sumainpar = sumainpar + num;
    }
}
return;
}

int main(){

ciclo();
cout<<"La suma de los números pares es "<<sumapar<<endl;
cout<<"La suma de los números inpares es "<<sumainpar<<endl;

return 0;
}