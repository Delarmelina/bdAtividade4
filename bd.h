#include <iostream>
#include <fstream>
//#include "Lista.h"

// Cria um banco de dados
void addBd(){
  string nameBd = "";

  cout << "Nome do banco de dados: ";
  cin >> nameBd; 
  nameBd = nameBd + ".txt";  

  ofstream bd (nameBd, ios::app);
  bd.close();
}

// Ler um baco de dados
void readBd(){

}

// Escreve no banco de dados
void writeBd(){
  string nameBd = "";
  int bdLen = 0, value = 0;
  Lista list;

  cout << "Nome do banco de dados: ";
  cin >> nameBd; nameBd = nameBd + ".txt"; 
  cout << "Quantidade de dados para serem armazenados: ";
  cin >> bdLen; 

  // Escreve na lista estruturada
  for (int i = 0; i < bdLen; i++) {
    cout << "Escreva o valor a ser armazenado: ";
    cin >> value;
    list.insereNoFim(value);
  }

  No* iD = list.inicio;

  while(iD){
    ofstream bD (nameBd, ios::app);
    bD << iD -> obterValor() << endl;
    iD = iD -> obterProximo();
    bD.close();
  }
}    