#include <iostream>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int proximoPar = 0;

    cout << "Ingrese un valor entero positivo:" << endl;
    cin >> numeroIngresado;

    if (numeroIngresado % 2 == 0)
    {
        proximoPar = numeroIngresado + 2;
    }
    else
    {
        proximoPar = numeroIngresado + 1;
    }

    cout << "El siguiente par para el numero " << numeroIngresado << " es: " << proximoPar << endl;
}