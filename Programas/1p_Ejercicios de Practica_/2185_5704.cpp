//2185 - A ? B
#include <iostream>
using namespace std;

float a = 0;
float b = 0;
float tmp = 0;

void ingreso (){
    cin>> a;
    cin>> b;
return;
}

int main(){
ingreso();
int A = a;
int B = b;
tmp = a + b;
cout<<tmp<<endl;
tmp = a - b;
cout<<tmp<<endl;
tmp = a * b;
cout<<tmp<<endl;
tmp = a / b;
cout<<tmp<<endl;
tmp = A % B;
cout<<tmp<<endl;

return 0;
}