#include <iostream>
using namespace std;

int main()
{
    int mes = 0;
    int anio = 0;

    cout << "Ingrese el numero de un mes: " << endl;
    cin >> mes;
    cout << "Ingrese el numero de un anio: " << endl;
    cin >> anio;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 | mes == 12)
    {
        cout << "el mes ingresado tiene 31 dias" << endl;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        cout << "el mes ingresado tiene 30 dias" << endl;
    }
    else if (mes == 2)
    {
        if (anio % 4 == 0)
        {
            cout << "el mes ingresado tiene 29 dias ya que es un anio bisiesto" << endl;
        }
        else
        {
            cout << "el mes ingresado tiene 28 dias" << endl;
        }
    }
}