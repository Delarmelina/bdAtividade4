#include <iostream>
#include "structList.h"
#include "bd.h"

using namespace std;

int main() {
  int selection = 0, bdLen = 0;
  char createTxt [200];
  string bdName = "";
  
  cout << ("\nOque deseja fazer?\n\
  1 - Ler banco de dados!\n\
  2 - Escrever no banco de dados!\n\
  3 - Criar banco de dados!\n\
  Resposta:");
  cin >> selection;

  while(selection == 1 || selection == 2 || selection == 3){

    switch(selection){
      case 1:
        // Ler banco de dados
          readBd();
        break;
      case 2:
        // Escrever no banco de dados
          writeBd();
        break;
      case 3:
        // Criar banco de dados
          addBd();
        break;
    }

    cout << ("\nOque deseja fazer?\n\
      1 - Ler banco de dados!\n\
      2 - Escrever no banco de dados!\n\
      3 - Criar banco de dados!\n\
      Resposta:");
    cin >> selection;
  }
}