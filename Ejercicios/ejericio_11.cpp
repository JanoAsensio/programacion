#include <iostream>
using namespace std;

int main()
{
    int edad = 0;

    cout << "Ingrese una edad por favor: " << endl;
    cin >> edad;

    if (edad <= 12)
    {
        cout << "menor" << endl;
    }
    else if ((edad >= 13) && (edad <= 18))
    {
        cout << "'cadete', ya que la edad ingresada esta comprendida entre 13 y 18" << endl;
    }
    else if ((edad > 18) && (edad < 26))
    {
        cout << "te comento que la categoria a la que pertenece la edad que ingresaste es 'cadete'" << endl;
    }
    else
    {
        cout << "'Mayor' es la categoria a la que pertene la edad ingresada, y no cumple ninguna de las condiciones anteriores" << endl;
    }
}