#ifndef SELECIONARCONTA_H
#define SELECIONARCONTA_H

#include "../../Banco/banco.hpp"
#include "../../Relatorio/relatorio.hpp"
#include "../../Imprimivel/imprimivel.hpp"

#include "../menu.hpp"


class SelecionarConta{
private:

  int opt;
  bool escolherOutraConta = false;
  bool finalizar = false; 

 
private:
  //métodos
  void setContaPrincipal();
  void setContaSecundaria();

  void menu();
  void opcoesDoMenu();
  
  
public:
  SelecionarConta();
  ~SelecionarConta();
};

#endif // !SELECIONARCONTA_H