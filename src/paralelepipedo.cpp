#include <iostream>
using namespace std;
#include "./../include/paralelepipedo.h"

void paralelepipedo(int aresta, int aresta2, int aresta3){
  float area;
  float volume;
  area = (2 * aresta * aresta2) + (2 * aresta * aresta3) + (2 * aresta2 * aresta3);
  volume = aresta * aresta2 * aresta3;

  cout << "Area do paralelepipedo:" << area << endl;
  cout << "Volume do paralelepipedo:" << volume;
}