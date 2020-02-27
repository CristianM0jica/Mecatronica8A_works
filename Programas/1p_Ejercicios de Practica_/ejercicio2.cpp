//2.Leer una serie de números distintos de cero (el último número de la series es -99) y obtener el número mayor. 
//Como resultado se debe visualizar el número mayor y un mensaje de indicación de número negativo, 
//caso de que se haya lédio un numero negativo.

#include <iostream>
using namespace std;

int num = 0;
int mayornum = 0;

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        cout<<"Inserte un número diferente a 0 y mayor a -99"<<endl;
        cin>>num;
        if (num != 0 && num >-99 && num > mayornum)
        {
            mayornum = num;
        }
        if (num == 0 || num <-99)
            {
            cout<<"Numero no valido "<<endl;
            i= i-1;
            }
    }
return;   
}

int main(){
    ciclo ();
    cout<<"El numero mayor es "<<mayornum<<endl;    
    return 0;
}