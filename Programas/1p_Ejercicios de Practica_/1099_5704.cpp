//1099 - Números Pitagóricos
#include <iostream>
using namespace std;

int a = 0;
int b = 0;
int c = 0;
int tmp = 0;

void input (){
    cin>> a;
    cin>> b;
    cin>> c;
return;
}

int main(){
do
{
    input();
    if (a <= 10000 && b <= 10000 && c <= 10000)
    {
        a = a*a;
        b = b*b;
        c = c*c;
        tmp = (a+b) - c;
        if (tmp >= 0)
        {
            if (a != 0 && b != 0 && c != 0)
            {
                cout<<"right"<<endl;
            }        
        }
        else
        {
            if (a != 0 && b != 0 && c != 0)
            cout<<"wrong"<<endl;
        }
    }
} while (a != 0);

return 0;
}