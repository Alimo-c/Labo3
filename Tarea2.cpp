#include "iostream"
#include "cmath"
using namespace std;
//Área y perímetro de un círculo//
int main ()
{
    float num;
    float A;
    float P;
    cout << "Introduzca el radio del circulo" << endl;
    cin >> num;
    A=pow(num,2)*3.1416;
    P=2*3.1416*num;
    cout << "El area es: " << A << " y su perimetro es: " << P;
}