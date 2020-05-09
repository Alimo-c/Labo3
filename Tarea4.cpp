#include "iostream"
#include "cmath"
#include "string"
using namespace std;
//Producto, costo y cantidad//
int main ()
{
    string producto;
    float costo;
    int cantidad;
    float total;
    cout << "Nombre del producto comprado :";
    cin >> producto;
    cout << "Costo del producto comprado: ";
    cin >> costo;
    cout << "Cantidad de productos comprados: ";
    cin >> cantidad;
    total=costo*cantidad;
    cout << "El total de dinero gastado por la compra de " << producto << " es $" << total;
}