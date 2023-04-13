#include <iostream>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int quintaParte = 0;
    int resto = 0;
    int septimaParte = 0;

    cout << "Ingrese un numero entero positivo:" << endl;
    cin >> numeroIngresado;

    quintaParte = numeroIngresado / 5;
    resto = numeroIngresado - quintaParte * 5;
    septimaParte = quintaParte / 7;

    cout << "Hola usuario! me he tomado la libertado de realizar operaciones matematicas con el numero ingresado, siendo los resultados de:" << endl;
    cout << " - La quinta parte: " << quintaParte << endl;
    cout << " - El resto de la division por 5: " << resto << endl;
    cout << " - La septima parte del resultado obtenido de la primer operacion: " << septimaParte << endl;
}

// no se especifica valores decimales ya que la consigna indica manejo de numeros enteros