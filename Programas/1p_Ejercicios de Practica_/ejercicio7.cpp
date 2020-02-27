//7.Sumar los números pares del 2 al 100 e imprimir su valor.
#include <iostream>
using namespace std;

int sumapar = 0;
int num = 0;
int tmp = 0;

void ciclo (){
    for ( num = 2; num <= 100; num++)
{
    tmp = num % 2;
    if (tmp == 0)
    {
        cout<<num<<endl;
        sumapar = sumapar + num;
    }
}
return;
}

int main(){

ciclo();
cout<<"La suma de los números pares es "<<sumapar<<endl;

return 0;
}