//6. Calcular la suma de los cuadrados de los cien primeros números naturales.

#include <iostream>
#include <math.h>
using namespace std;

unsigned int num = 0;
double cuadrado = 0; 
double suma = 0; 

void ciclo (){
for (num = 0; num <= 100; num++)
{
    cuadrado = pow (num, 2);
    suma = suma + cuadrado;
}
return;
}

int main(){
ciclo();   
cout<<"La suma de los cuadrados de los cien primeros números naturales es "<<suma<<endl;

//long int suma = 100*((100+1)*((2*100)+1))/6 

return 0;
}