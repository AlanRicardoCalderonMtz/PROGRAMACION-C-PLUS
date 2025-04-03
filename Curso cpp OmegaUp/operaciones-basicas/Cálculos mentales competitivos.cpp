#include <iostream>
#include <iomanip>
#include <cmath> // Necesario para pow()

using namespace std;

int main()
{
    float R = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    cin >> R;

    cout << "Resultados: " << endl;

    cout << fixed << setprecision(6) << R<<" ";
    r1 = R + 5;
    cout << fixed << setprecision(6) << r1<<" ";
    r2 = pow(r1, 2);
    cout << fixed << setprecision(6) << r2<<" ";
    // Al resultado anterior, dividirlo entre un tercio del número original de R
    r3 = r2 * (3 / R);
    cout << fixed << setprecision(6) << r3<<" ";
    // Al resultado anterior, elevarlo a la potencia de 3
    r4 = pow(r3, 3);
    cout << fixed << setprecision(6) << r4<<" ";

    return 0;
}