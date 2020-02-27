//5. Se trata de escribir el algoritmo que permita emitir la factura correspondiente a una compra de 
//un artículo determinado, del que se adquieren una o varías unidades. El IVA a aplicar es del 15 por 100 
//y si el precio bruto (precio venta más IVA) es mayor de 50.000 pesetas, se debe realizar un descuento 
//del 5 por 100

#include <iostream>
using namespace std;

float producto = 0; //Precio definido del producto
int cantidad = 0;  //Cantidad de productos que se compran
float iva = 0.15; //Será igual al 15% del costottl
float costo1 = 0; //Suma de costo e iva
float costo2 = 0; //Costo bruto menos el descuento
float descuento = 0.05; //si se desea mostrar el descuento

void ingreso (){
cout<<"Ingrese el precio del producto "<<endl;
cin>>producto;
cout<<"Ingrese la cantidad de productos "<<endl;
cin>>cantidad;
return;
}

void calculo (){
ingreso();
producto = producto*cantidad;
costo1 = (producto * iva) + producto;
if (costo1 > 50000)
{
    costo2 = costo1 - (costo1*descuento);
    cout<<"¡Su compra tuvo descuento! "<<endl;
    cout<<"El precio final es $"<<costo2<<endl;
}
else
{
    cout<<"Su compra no tuvo descuento "<<endl;
    cout<<"El precio final es $"<<costo1<<endl;
}
return;
}
int main(){
calculo();

return 0;
}