#include <iostream>
using namespace std;

int main()
{
    int numeroIngresadoA = 0;
    int numeroIngresadoB = 0;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoProducto = 0;

    cout << "Ingrese un valor entero positivo:" << endl;
    cin >> numeroIngresadoA;

    cout << "Ingrese otro valor entero positivo:" << endl;
    cin >> numeroIngresadoB;

    resultadoSuma = numeroIngresadoA + numeroIngresadoB;
    resultadoResta = numeroIngresadoA - numeroIngresadoB;
    resultadoProducto = numeroIngresadoA / numeroIngresadoB;

    cout << "La suma de los valores ingresados es: " << resultadoSuma << endl;
    cout << "La resta de los valores ingresados es: " << resultadoResta << endl;
    cout << "El producto de los valores ingresados es: " << resultadoProducto << endl;
}