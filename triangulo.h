#include <iostream>
using namespace std;
#include <math.h> 

namespace TT{

  // Estrutura do Triangulo
  struct tTriangulos{
    float lado1;  //cateto1
    float lado2;  //cateto2
    float lado3;  //hipotenusa
  };

  // Calcula perimetro do triangulo
 void calcularPerimetro(tTriangulos Trg){
    cout << "Perimetro do Triangulo: " << Trg.lado1 + Trg.lado2 + Trg.lado3 << endl;
 };

 // Calcula a area do triangulo
 void calcularArea(tTriangulos Trg){
    cout << "Area do Triangulo: " << (Trg.lado1*Trg.lado2)/2 << endl; 
 };
 
 // Calcula a hipotenusa do triangulo tendo os 2 catetos
 float calcularHipotenusa(tTriangulos Trg){
   return sqrt(pow(Trg.lado1,2)+pow(Trg.lado2,2));
 };
}