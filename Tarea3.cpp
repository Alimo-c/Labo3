#include "iostream"
#include "cmath"
using namespace std;
//Resolver ecuación cuadrática//
int main()
{
    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
    cout << "Introduzca los valores de 'a', 'b' y 'c'" << endl;
    cin >> a >> b >> c;
    d=sqrt(b*b-4.0*a*c);
    x1=(-b+d)/(2.0*a);
    x2=(-b-d)/(2.0*a);
    cout << "X1 vale: " << x1 << " y X2 vale: " << x2; 
}