//1023 - Administración Financiera
#include <iostream>
using namespace std;

float N = 0;
float S = 0;
float P = 0;

int main(){

for (int i = 0; i < 12; i++)
{
    cin>>N;
    if (N >= 0)
    {
       S = S + N;
    }
}    
P = S / 12;
cout<<P<<endl;

return 0;
}