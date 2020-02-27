//13. Calcular la nota media de los alumnos de una clase considerando n-numero de alumnos y c-numero de notas 
//de cada alumno.

#include <iostream>
using namespace std;

int cant_alumnos = 0;
int cant_notas = 0;
float valor_nota = 0;
float suma_notas = 0;
float promedio_notas = 0;

void parametros (){
    cout<<"Escriba el número de alumnos"<<endl;
    cin>>cant_alumnos;
    cout<<"Escriba la cantidad de notas"<<endl;
    cin>>cant_notas;
return;
}

void calificaciones (){
parametros();
    for (int x = 1; x <= cant_alumnos; x++){
        cout<<"------Ingresando las notas del alumno "<<x<<"------"<<endl;
        for (int i = 1; i <= cant_notas; i++)
        {
            cout<<"Inserte la califiación de la nota "<<i<<endl;
            cin>>valor_nota;
            suma_notas = valor_nota + suma_notas;
        }
    }
    promedio_notas = suma_notas/(cant_alumnos*cant_notas);
return;
}

int main(){
    calificaciones();
    cout<<"La nota media de la clase es: "<<promedio_notas<<endl;
return 0;
}