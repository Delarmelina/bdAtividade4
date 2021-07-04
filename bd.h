#include <iostream>
#include <fstream>
#include "Lista.h"

using namespace std;

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
  string nameBd = "", line = "";
  int lenLines = 0;

  cout << "Nome do banco de dados: ";
  cin >> nameBd; nameBd = nameBd + ".txt"; 

  while (getline(nameBd, line))
    ++lenLines;
  cout << lenLines;

  //Lista list;
  //ifstream bd (nameBd);
  //  while (i < 15) {
  //    entrada >> novo;
  //    l.insereNoFim(novo);
  //    i++;
  //  }
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

  No* iD = list.inicio; // Nós incial

  // Escreve da lista estruturada para o banco de dados txt
  while(iD){
    ofstream bD (nameBd, ios::app);
    bD << iD -> obterValor() << endl;
    iD = iD -> obterProximo();
    bD.close();
  }
}    