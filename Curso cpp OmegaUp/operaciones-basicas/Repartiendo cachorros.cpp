#include <iostream>
using namespace std;

int main() {
    int C, P, H;
    cin >> C >> P >> H;

    // Primero, Don Pancho se queda con P cachorros
    int restantes = C - P;

    // Se reparten los cachorros equitativamente entre la esposa y los H hijos
    int familia = H + 1; // hijos + esposa
    int sobrantes = restantes % familia;

    cout<<"P: "<<P<<endl;

    // Don Pancho se quedará con los que planeaba más los sobrantes
    int total = P + sobrantes;

    cout << total << endl;

    return 0;
}
