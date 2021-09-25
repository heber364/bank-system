#ifndef SELECIONARCONTA_H
#define SELECIONARCONTA_H
#include "../../Banco/banco.hpp"
#include "../../Relatorio/relatorio.hpp"
#include "../../Imprimivel/imprimivel.hpp"


class SelecionarConta{
private:
  //atributos
  int opt;
  bool escolherOutraConta = false;
  bool finalizar = false; 

  std::vector<ContaBancaria*> contaSelecionada;

private:
  //métodos
  void setContaPrincipal(Banco* _banco);
  void setContaSecundaria(Banco* _banco);

  void menu();
  void opcoesDoMenu(Banco* _banco);
  
  void transfereDinheiro(int _valor, Banco* _banco);
  
public:
  SelecionarConta(Banco* _banco);
  ~SelecionarConta();
};

#endif // !SELECIONARCONTA_H