#include "iostream"
using namespace std;
//Promedio de 3 números//
int main ()
{
    int num1;
    int num2;
    int num3;
    float prom;
    cout << "Introduzca 3 numeros enteros" << endl;
    cin >> num1 >> num2 >> num3;
    prom=(num1+num2+num3)/3.0;
    cout << "El promedio de los 3 numeros es: " << prom;
}