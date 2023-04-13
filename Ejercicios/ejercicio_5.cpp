#include <iostream>
using namespace std;

int main()
{
    int primerValor = 0;
    int segundoValor = 0;

    cout << "Ingrese un numero entero:" << endl;
    cin >> primerValor;

    cout << "Ingrese otro numero entero distinto del primero ingresado:" << endl;
    cin >> segundoValor;

    // if (primerValor == segundoValor)
    // {
    //     cout << "El numero ingresado es igual al primero, ingrese otro numero distinto:" << endl;
    //     cin >> segundoValor;
    // }

    while (primerValor == segundoValor)
    {
        cout << "El numero ingresado es igual al primero, ingrese otro numero distinto:" << endl;
        cin >> segundoValor;
    }

    if (primerValor > segundoValor)
    {
        cout << "Ésta una leyenda que emite apropiadamente que el numero mayor de los ingresados es: " << primerValor << endl;
    }
    else
    {
        cout << "Ésta una leyenda que emite apropiadamente que el numero mayor de los ingresados es: " << segundoValor << endl;
    }
}
