//18. ¿N es primo?//

#include <iostream>
using namespace std;

int num = 0;
int divisores = 0;

void ingreso (){
    cin>>num;
return;
}

void calculo (){
    ingreso();
    for (int i = 1; i <= num; i++)
    {        
        if (num % i == 0)
        {
            divisores = divisores + 1;
        }        
    }    
return;
}

void primo (){
    calculo();
    if (divisores > 2)
    {
        cout<<"El número no es primo"<<endl;
    }
    else
    {
        cout<<"El número sí es primo"<<endl;
    }    
return;
}

int main(){
    cout<<"Ingrese un numero natural"<<endl;
    primo();
    return 0;
}