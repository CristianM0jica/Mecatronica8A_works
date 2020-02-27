#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lim_inf = -50;
int lim_sup = 50;
int suma = 0;

void alaeatorio(){
	srand(time(NULL));
return;
}

void ciclo (){
	alaeatorio();
	for(int i= 0; i < lim_sup; i++)
	{
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;
		if (valor > 0)
		{
			suma = suma  + valor;
		}
	}   
cout<<"La suma de los números positivos es: "<<suma<<endl;	
}

int main(){
	ciclo();
return 0;
} 

