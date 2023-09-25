#include <iostream>
#include <cmath>
using namespace std;
#include "./../include/triangulo.h"

void triangulo(int base){
    float area;
    float perimetro;
    area = pow(base, 2) * sqrt(3) / 4;
    perimetro = 3 * base;

    cout << "Area do triangulo:" << area << endl;
    cout << "Perimetro do triangulo:" << perimetro;
}