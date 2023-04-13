#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    int month = 0;
    int year = 0;
    int result = 0;

    cout << "Ingrese una fecha valida para el dia:" << endl;
    cin >> day;

    cout << "Ingrese una fecha valida para el mes:" << endl;
    cin >> month;

    cout << "Ingrese una fecha valida para el año:" << endl;
    cin >> year;

    result = year * 10000 + month * 100 + day;

    cout << "la representacion de la fecha ingreseda en numero natural es: " << result << endl;
}

// no tiene validacion de coherencia calendaria (dia/mes), siendo posible el resultado ej: dia 30 mes 2