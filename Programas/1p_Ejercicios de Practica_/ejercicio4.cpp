//4. Leer 500 números enteros y obtener cuántos son positivos

#include <iostream>
using namespace std;

int num = 0;
int numspostvs = 0; 

void selector (){
for (int i = 0; i < 500; i++)
    {
        cin>>num;
        if (num > 0)
        {
            numspostvs = numspostvs + 1;
        }
        if (num == 0)
        {
            cout<<"El 0 no es un número valido"<<endl;
            i= i-1;
        }
    }
return; 
}

int main(){
cout<<"Inserte 500 números diferentes de 0"<<endl;
selector();
cout<<"Los números positivos son "<<numspostvs<<endl;
return 0;
}