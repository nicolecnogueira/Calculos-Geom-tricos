#include <iostream>
#include <cmath>
using namespace std;
#include "./../include/circulo.h"

void circulo(int raio){
  float area;
  float perimetro;
  area = 3.1416 * pow(raio, 2);
  perimetro = 2 * 3.1416 * raio;

  cout << "Area do circulo:" << area << endl;
  cout << "Perimetro do circulo:" << perimetro;
}