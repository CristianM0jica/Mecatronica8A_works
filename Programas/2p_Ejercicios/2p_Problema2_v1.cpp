#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
 int nums = 0;
 int x = 0;
 int o = 0;
 int tmp = 0;
 unsigned long tmp2 = 0;
 srand(time(NULL));
 int y1, y2, y3, y4 = 0;
 cout<<"Ingrese cuántos números quiere (Menos de 1000)"<<endl;
 cin>>nums;
 int vector[1000];
 cout<<"Ingrese sus resultado deseado (Menor a 1000000000)"<<endl;
 cin>>x;
 cout<<"Ingrese sus números"<<endl; 
   for(int i = 0; i < nums; i++){
     int n = 0;
     cin>>n;
    vector[i] = n;
 }
for (int j = 0; j < nums; j++)
{
  tmp = tmp + vector [j];
}
if (tmp > x && nums >= 4)
{
  do
{ 
  tmp2++;
  y1 = rand()%nums;
  y2 = rand()%nums;
  y3 = rand()%nums;
  y4 = rand()%nums;
  if (y1 != y2 && y2 != y3 && y1 != y3 && y1 != y4 && y3 != y4 && y3 != y4 && y2 != y4)
  {
    o = vector[y1] + vector[y2] + vector[y3] + vector[y4];
  }
  if (tmp2 == 5000000)
  {
    cout<<"Imposible"<<endl;
    return 0;
  }
  
} while (o != x);
cout<<y1<<y2<<y3<<y4<<endl;
}
else
{
  cout<<"Imposible"<<endl;
}
return 0;
}