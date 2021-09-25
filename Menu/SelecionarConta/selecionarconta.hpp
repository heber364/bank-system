#ifndef SELECIONARCONTA_H
#define SELECIONARCONTA_H
#include "../../Banco/banco.hpp"
#include "../../Relatorio/relatorio.hpp"
#include "../../Imprimivel/imprimivel.hpp"


class SelecionarConta{
private:
  //atributos
  Banco bancoCentral;
  int opt;
  bool escolherOutraConta = false;
  bool finalizar = false; 

  std::vector<ContaBancaria*> contaSelecionada;

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