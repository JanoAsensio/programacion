#include <iostream>
using namespace std;

int main()
{
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;

    cout << "Ingrese la medida de los lados de un triangulo siendo valor del lado 1: " << endl;
    cin >> lado1;
    cout << "El valor del lado 2: " << endl;
    cin >> lado2;
    cout << "El valor del lado 3: " << endl;
    cin >> lado3;

    if (lado1 == lado2 && lado1 == lado3)
    {
        cout << "la medida de los valores ingresados representan un triangulo equilatero" << endl;
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
        cout << "la medida de los valores ingresados representan un triangulo escaleno" << endl;
    }
    else if (((lado1 == lado2) && (lado1 != lado3)) || ((lado1 == lado3) && (lado1 != lado2)) || ((lado2 == lado3) && (lado2 != lado1)))
    {
        cout << "la medida de los valores ingresados representan un triangulo isosceles" << endl;
    }
}