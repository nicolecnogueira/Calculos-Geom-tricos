#include <iostream>
#include <cmath>
#include "./../include/esfera.h"
using namespace std;

void esfera(int raio){
  float area;
  float volume;
  area = 4 * 3.1416 * pow(raio, 2);
  volume = (4 * 3.1416 * pow(raio, 3))/3;

  std::cout << "Area da esfera:" << area << endl;
  cout << "Volume da esfera:" << volume;
}