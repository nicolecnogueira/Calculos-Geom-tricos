#include <iostream>
#include <cmath>
using namespace std;
#include "./../include/quadrado.h"
void quadrado(int base){
  float area;
  float perimetro;
  area = pow(base, 2);
  perimetro = 4 * base;

  cout << "Area do quadrado:" << area << endl;
  cout << "Perimetro do quadrado:" << perimetro;
}