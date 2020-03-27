//1049 - Suma
#include <iostream>
using namespace std;

int N = 0;
float suma = 0;

int main(){
cin>>N;
if (N <= 10000)
{
    for (int i = 0; i <= N; i++)
    {
        suma = suma + i;
    }
}
cout<<suma<<endl;
return 0;
}