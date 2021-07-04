#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Ler um baco de dados
void readBd(){
  string nameBd = "", line = "";
  Lista list;

  cout << "\nNome do banco de dados: ";
  cin >> nameBd; nameBd = nameBd + ".txt"; 

  ifstream bd (nameBd);

  if(bd.fail()){
      cout << "Esse banco de dados não existe!!!\n";
  }else{
    while(getline(bd, line))
      list.insereNoFim(stoi(line));
    bd.close();
  list.imprimirElementos();
  }
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