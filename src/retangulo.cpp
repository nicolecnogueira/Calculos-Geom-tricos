#include <iostream>
using namespace std;
#include "./../include/retangulo.h"

void retangulo(int base, int altura){
    float area;
    float perimetro;
    area = base * altura;
    perimetro = (2 * base) + (2 * altura);

    cout << "Area do retangulo:" << area << endl;
    cout << "Perimetro do retangulo:" << perimetro;
}