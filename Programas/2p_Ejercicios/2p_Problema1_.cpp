#include <iostream>
using namespace std;

int par (int n){
    int ptmp = 0;
    ptmp = n/2;
    return ptmp;
}

int inpar (int n){
    int itmp = 0;
    itmp = ((n*3)+1);
    return itmp;
}

int ciclo (int n){
    while (n!=1)
        {
            cout<<n<<" ";
            int tmp = n%2;   
            if (tmp == 0)
            {
                n=par(n);
            }
            else
            {
                n=inpar(n);
            }
        }
     while (n==1)
        {
            cout<<n<<endl;
            return 0;
        }       
    return n;           
}

int main (){
    int n = 0;
        cout<<"Ingrese su numero"<<endl;
    cin>>n;
    if (n>=1 && n<1000000)
    {
        n = ciclo (n);
    }
    else
    {
        cout<<"¡ERROR! Ingrese un numero entero positivo mayor a 0 y menor a 1000000"<<endl;
        return 0;
    } 
}