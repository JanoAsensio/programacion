#include <iostream>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int day = 0;
    int month = 0;
    int year = 0;

    cout << "Ingrese un numero entero de hasta 8 digitos:" << endl;
    cin >> numeroIngresado;

    day = numeroIngresado % 100;
    month = (numeroIngresado % 10000 - day) / 100;
    year = (numeroIngresado - numeroIngresado % 10000) / 10000;

    cout << "la representacion en formato calendario para el numero ingresado es:" << endl;
    cout << "dia:" << day << endl;
    cout << "mes:" << month << endl;
    cout << "año:" << year << endl;
}