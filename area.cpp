
#include <iostream>

using namespace std;

int main()
{
    float r,area, perimetro;
    cout << "Ingrese la longitud del radio: ";
    cin >> r;

    area = 3.1415*r*r;
    perimetro = 2*3.1415*r;
    cout << "\nEl area del circulo es: " << area;
    cout << "\nEl perimetro del circulo es: " << perimetro;

    return 0;
}