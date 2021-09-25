#ifndef REMOVERCONTA_H
#define REMOVERCONTA_H

#include "../../Banco/bancoCentral.hpp"
#include "../../voidsauxiliares.hpp"

class RemoverConta{
private:
  void setConta();
  void confirmarRemocao();
public:
  RemoverConta();
  ContaBancaria* contaSelecionada;
  int numeroDaConta;
  bool finalizar = false;
};


#endif // !REMOVERCONTA_H