#include <iostream>
#include <cmath>
#include "./../include/piramide.h"
using namespace std;

void piramide(int aresta, int altura){
  float area;
  float volume;
  float apotema;
  float areaB;
  float areaT;
  apotema = sqrt(pow(altura, 2) + pow(aresta / 2, 2));
  areaB = pow(aresta, 2);
  areaT = (aresta * apotema) / 2;
  area = areaB + (4 * areaT);
  volume = (1 * pow(aresta, 2) * altura) / 3;

  cout << "Area da piramide:" << area << endl;
  cout << "Volume da piramide:" << volume;
}