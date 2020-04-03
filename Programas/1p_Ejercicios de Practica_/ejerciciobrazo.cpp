#include<iostream>
#include<math.h>
using namespace std;

int calcular(int m, int T){
	int A,teta,w;
	w=m*9.81;
	teta=acos(w/T);
	A=T*sin(teta);
return A;
}

int main(){
	int T,m,A; 
cin>>T>>m;

A=calcular(m,T);
cout<<"La fuerza que se requiere en A es: "<<A<<" N"<<endl;


return 0;
}