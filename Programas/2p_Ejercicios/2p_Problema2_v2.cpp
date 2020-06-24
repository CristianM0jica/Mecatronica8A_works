#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int prueba (int n, int a, int b, int c, int d);
int ciclo (int n, int x, int vector []);

int main(){
  int n, x, tmp = 0;
  int vector [1000];
  int a = 0;
   cout<<"Ingrese cuántos números quiere (Menos de 1000) e Ingrese sus resultado deseado (Menor a 1000000000)"<<endl;
   cin>>n>>x;
   cout<<"Ingrese sus números"<<endl;
   for(int i = 0; i < n; i++)
   {
     int numero = 0;
     cin>>numero;
     vector[i] = numero;
    }
    for (int j = 0; j < n; j++)
    {
      tmp = tmp + vector [j];
    }
    if (tmp >= x && n >= 4){
      cout<<"Generando combinaciones. Puede tardar 1 minuto. Gracias por esperar"<<endl;
      ciclo (n, x, vector);
    }
    else
  {
    cout<<"Imposible"<<endl;
  }
return 0;
}

int prueba (int n, int a, int b, int c, int d){
  int y1, y2, y3, y4 = 0;
  int tmp3 = 2;
  for (int v = 0; v < tmp3; v++)
  srand(time(NULL));
  {    
    tmp3++;
    y1 = rand()%n;
    y2 = 1 + rand()%(n-1);
    y3 = 2 + rand()%(n-2);
    y4 = 3 + rand()%(n-3);
    if (a == 1 && b == 0 && c==0 && d == 0)
    {
      return y1;
    }
    if (a == 0 && b == 1 && c==0 && d == 0)
    {
      return y2;
    }
    if (a == 0 && b == 0 && c==1 && d == 0)
    {
      return y3;
    }
    if (a == 0 && b == 0 && c==0 && d == 1)
    {
      return y4;
    }
  }
}

int ciclo (int n, int x, int vector []){  
  int suma = 0;
  unsigned long tmp2 = 0;
  int z1, z2, z3, z4 = 0;
  int u1, u2, u3, u4 = 0;
  do
  { 
    z1 = prueba(n, 1, 0, 0, 0);
    z2 = prueba(n, 0, 1, 0, 0);
    z3 = prueba(n, 0, 0, 1, 0);
    z4 = prueba(n, 0, 0, 0, 1);
    if (z1 != z2 && z2 != z3 && z1 != z3 && z1 != z4 && z3 != z4 && z2 != z4)
    {
      if (u1 != z1 && u2 != z2 && u3 != z3 && u4 != z4)
      {
        tmp2++;
        suma = vector[z1] + vector[z2] + vector[z3] + vector[z4];
        if (tmp2 == 5000000)
        {
          cout<<"Imposible"<<endl;
          return 0;
        }
      }
    u1 = z1, u2 = z2, u3 = z3, u4 = 4;
    }
  } while (suma != x);
  cout<<(z1+1)<<" "<<(z2+1)<<" "<<(z3+1)<<" "<<(z4+1)<<endl;
}