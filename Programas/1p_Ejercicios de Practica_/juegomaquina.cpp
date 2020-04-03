#include <iostream>
using namespace std;

int main(int argc, char*argv[]){

int x=0;
int y=0;
int z=0;
char n[12];
	if(argc!=13){
		cout<<"Parametros incorrectos"<<endl;
	return 1;
	}
	
	else{
		for(int i=1;i<=11;i++){
			n[i-1]=argv[1][0];
		}	
	}
	for(int i=0;i<=11;i++){
		if(z==0){
			if(n[i]=='A'){
				if(x==0){
					cout<<"a";
					x=1;	
				}
			else{
				cout<<"a";
				x=0;
				z=1;
			}
		}
		else if(n[i]=='B'){
			if(y==0){
				y=1;
				z=1;
				cout<<"a";
			}
		else{
			y=0;
			cout<<"b";
		}
		}
		else{
			cout<<"Error"<<endl;
		}
		}
		else{
			if(n[i]=='A'){
				if(x=0){
					x=1;
					cout<<"a";
				}
		
		else{
			x=0;
			z=0;
			cout<<"b";
		}
		}		
		else if(n[i]=='B'){
			if(y==0){
			y=1;
			z=0;
			cout<<"b";
		}
		else{
			y=0;
			cout<<"b";
		}

	}	
      }
}
cout<<" x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
return 0;
}