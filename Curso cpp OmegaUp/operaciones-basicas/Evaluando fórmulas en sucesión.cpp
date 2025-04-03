#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float y = 0, z = 0;

    float x = 0;
    cin >> x;

    y = (x + 5) / (2 * (x + 1));
    z = ((pow(y, 2)) + x * (x - (2 * y))) / (x * y);

    cout << z << endl;
    return 0;
}