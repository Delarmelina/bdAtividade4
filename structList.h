#include <iostream>

using namespace std;

class No
{
  public:
  int valor;
  No* proximo;

  No (int elemento)
  {
    this -> valor = elemento;
    this -> proximo = NULL;
  }

  void definirProximo(No* end)
  {
    proximo = end;
  }

  int obterValor()
  {
    return valor;
  }

  No* obterProximo()
  {
    return proximo;
  }
};

class Lista
{
  public:
  No* inicio;
  No* fim;

  Lista()
  {
    inicio = NULL;
    fim = NULL;
  }

  Lista(int num)
  {
    inicio = new No(num);
    fim = inicio;
  }

  virtual ~Lista()
  {
    delete inicio;
  }

  bool seVazia()
  {
    return (inicio == NULL);
  }

  void imprimirElementos()
  {
    cout << "ELEMENTOS DA LISTA" << endl;
    No* i = inicio;
    if(seVazia())
    {
      cout << "Lista sem elementos" << endl;
    }
    else
    {
      while(i)
      {
        cout << i -> obterValor() << endl;
        i = i -> obterProximo();
      }
      cout << endl;
    }
  }

   void insereNoInicio (int valor)
  {
    No* novo = new No(valor);

    if (seVazia())
    {
      inicio = novo;
      fim = novo;      
    }
    
    else
    {
      novo -> definirProximo(inicio);
      inicio = novo;
    }
  }

  void insereNoFim (int valor)
  {
    No* novo = new No(valor);

    if (seVazia())
    {
      inicio = novo;
      fim = novo;      
    }
    
    else
    {
      fim -> definirProximo(novo);
      fim = novo;
    }
  }

  int tamanhoLista()
  {
    if (seVazia())
    {
      return 0;
    }     
  
    No* i = inicio;
    int tamanho = 0;

    do
    {
      i = i -> obterProximo();
      tamanho++;    
    }
    
    while(i);

    return tamanho;
  }

  bool existeElemento(int valor)
  {
    No* i = inicio;
    while (i)
    {
      if (i -> obterValor() == valor)
      {
        return true ;
      }
      else
      {
        i = i ->obterProximo();
      }
    }
    return false;
  }

  void removerDaLista()
  {
    if (!seVazia())
    {
      if (inicio -> obterProximo() == NULL)
      {
        inicio = NULL;
      }
      else if (inicio -> obterProximo() -> obterProximo() == NULL)
      {
        inicio -> definirProximo(NULL);
      }
      else
      {
        No* anteriorDoAnterior = inicio;
        No* anterior = inicio -> obterProximo();
        No* elo = inicio -> obterProximo() -> obterProximo();

        while(elo)
        {
          No* auxiliar = anterior;
          anterior = elo;
          anteriorDoAnterior = auxiliar;
          elo = elo -> obterProximo();
        }

        delete anteriorDoAnterior -> obterProximo();
        anteriorDoAnterior -> definirProximo(NULL);
        fim = anteriorDoAnterior;
      }
    }
  }
};