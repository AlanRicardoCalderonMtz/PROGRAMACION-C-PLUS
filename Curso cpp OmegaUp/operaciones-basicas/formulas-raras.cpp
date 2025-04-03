#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float pi = 3.14159;
    float x, y, z, operacion1, operacion2, resultado;
    cin >> x >> y >> z;

    operacion1 = x+x*(y+pow(z,2));
    operacion2 = (x+pi)*(y+pi);
    resultado = operacion1/operacion2;

    cout << resultado << endl;

    return 0;   
}