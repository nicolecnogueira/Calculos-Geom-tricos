#include <iostream>
#include <cmath>
using namespace std;
#include "./../include/cubo.h"

void cubo(int aresta){
  float area;
  float volume;
  area = 6 * pow(aresta, 2);
  volume = pow(aresta, 2);

  cout << "Area do cubo:" << area << endl;
  cout << "Volume do cubo:" << volume;
}