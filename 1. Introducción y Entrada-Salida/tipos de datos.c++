// Tipos de datos en c++

// Libreria para poder usar cout y endl
#include <iostream>
#include <iomanip>
// Libreria para poder usar setprecision y fixed (colocar cantidad de decimales)

using namespace std;

int main()
{

    int numero = 15;
    float flotante = 10.45;
    double mayor = 16.3456;
    char letra = 'a';
    double flotante2 = 16.989856454;

    cout << "Entero: " << numero << endl;
    cout << "Flotante: " << flotante << endl;
    cout << "Double: " << mayor << endl;
    cout << "Char: " << letra << endl;
    cout << fixed << setprecision(2) << "Flotante2: " << flotante2 << endl;

    return 0;
}