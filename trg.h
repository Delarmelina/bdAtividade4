#include <iostream>
using namespace std;
#include <math.h> 

// Calcula perimetro do triangulo
void calcularPerimetro(int cat1, int cat2, float hip){
  cout << "Perimetro do Triangulo: " << cat1 + cat2 + hip << endl << endl;
};

// Calcula a area do triangulo
void calcularArea(int cat1, int cat2){
  cout << "Area do Triangulo: " << (cat1*cat2)/2 << endl; 
};

// Calcula a hipotenusa do triangulo tendo os 2 catetos
float calcularHipotenusa(int cat1, int cat2){
  return sqrt(pow(cat1,2)+pow(cat2,2));
};