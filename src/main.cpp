#include <iostream>
#include <string>
#include "../include/triangulo.h"
#include "../include/retangulo.h"
#include "../include/quadrado.h"
#include "../include/circulo.h"
#include "../include/piramide.h"
#include "../include/paralelepipedo.h"
#include "../include/cubo.h"
#include "../include/esfera.h"
using namespace std;

int main(){
    string figura;
    int altura;
    int base;
    int raio;
    int aresta;
    int aresta2;
    int aresta3;
    getline(cin, figura);

    if(figura == "triangulo"){
        cin >> base;
        triangulo(base);
    }
    if(figura == "retangulo"){
        cin >> base >> altura;
        retangulo(base, altura);
    }
    if(figura == "quadrado"){
        cin >> base;
        quadrado(base);
    }
    if(figura == "circulo"){
        cin >> raio;
        circulo(raio);
    }
    if(figura == "piramide"){
        cin >> aresta >> altura;
        piramide(aresta, altura);
    }
    if(figura == "paralelepipedo"){
        cin >> aresta >> aresta2 >> aresta3;
        paralelepipedo(aresta, aresta2, aresta3);
    }
    if(figura == "cubo"){
        cin >> aresta;
        cubo(aresta);
    }
    if(figura == "esfera"){
        cin >> raio;
        esfera(raio);
    }

        return 0;
}