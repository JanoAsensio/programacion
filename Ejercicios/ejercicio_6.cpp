#include <iostream>
using namespace std;

int main()
{
    int primerValor = 0;
    int segundoValor = 0;
    int resultadoCalculoPrimerValor = 0;
    int resultadoCalculoSegundoValor = 0;

    // ** Primer metodo, siendo el formato de ingreso AAAAMMDD **

    // cout << "Ingrese una fecha pasada con el formato AAAAMMDD sin caracteres extras, (ej: / ó -):" << endl;
    // cin >> primerValor;
    // cout << "Ingrese otra fecha pasada con el mismo formato:" << endl;
    // cin >> segundoValor;

    // if (primerValor < segundoValor)
    // {
    //     cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << primerValor << endl;
    // }
    // else
    // {
    //     cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << segundoValor << endl;
    // }

    // ** Segundo metodo, siendo el formato de ingreso DDMMAAAA **

    cout << "Ingrese una fecha pasada con el formato DDMMAAAA sin caracteres extras, (ej: / ó -):" << endl;
    cin >> primerValor;
    cout << "Ingrese otra fecha pasada con el mismo formato:" << endl;
    cin >> segundoValor;

    // Desgloce de primer fecha: (PV = Primer Valor)
    int diaPV = (primerValor / 10000) / 100;
    int mesPV = (primerValor / 10000) % 100;
    int anioPV = primerValor % 10000;

    // Desgloce de segunda fecha: (SV = Segundo Valor)
    int diaSV = (segundoValor / 10000) / 100;
    int mesSV = (segundoValor / 10000) % 100;
    int anioSV = segundoValor % 10000;

    if (anioPV > anioSV)
    {
        cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << primerValor << endl;
    }
    else if (anioPV == anioSV)
    {
        if (mesPV > mesSV)
        {
            cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << primerValor << endl;
        }
        else if (mesPV == mesSV)
        {
            if (diaPV > diaSV)
            {
                cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << primerValor << endl;
            }
            else
            {
                cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << segundoValor << endl;
            }
        }
        else
        {
            cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << segundoValor << endl;
        }
    }
    else
    {
        cout << "Ésta es la fecha ingresada con mayor proximidad a la fecha actual: " << segundoValor << endl;
    }
}
