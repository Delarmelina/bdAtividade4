#include <iostream>
#include <fstream>
#include <string>
#include <math.h> 

using namespace std;

// Ler um baco de dados
void readBd(){
  string nameBd = "", line = "";
  Lista list;

  // Busca o nome do banco de dados
  cout << "\nNome do banco de dados: ";
  cin >> nameBd; nameBd = nameBd + ".txt"; 

  ifstream bd (nameBd); // Abre o arquivo

  // Identifica se o banco existe, caso existir pega cada item do banco de dados e insere na lista
  if(bd.fail()){
      cout << "Esse banco de dados não existe!!!\n";
  }else{
    while(getline(bd, line))
      list.insereNoFim(stoi(line));
    bd.close();
  }
  list.imprimirElementos();
}

// Escreve no banco de dados
void writeBd(){
  string nameBd = "";
  int bdLen = 0, value = 0, triangles = 0, l1 = 0, l2 = 0;
  Lista list;

  cout << "Nome do banco de dados: ";
  cin >> nameBd; nameBd = nameBd + ".txt"; 
  cout << "Quantos triangulos deseja armazenar: ";
  cin >> triangles; 
  cout << "Insira os 2 catetos de cada triangulo: \n";

  // Escreve na lista estruturada cada item pedido
  for (int i = 0; i < triangles; i++) {
    cout << "Triangulo " << i+1 << " - Lado 1: ";
    cin >> l1;
    cout << "Triangulo " << i+1 << " - Lado 2: ";
    cin >> l2;
    list.insereNoFim(1410065407);
    list.insereNoFim(l1);
    list.insereNoFim(l2);
  }

  No* iD = list.inicio; // Nós incial

  // Escreve da lista estruturada para o banco de dados txt
  while(iD){
    ofstream bD (nameBd, ios::app);
    bD << iD -> obterValor() << endl;
    iD = iD -> obterProximo();
    bD.close();
  }

  cout << endl;
  list.imprimirElementos();
}    