#ifndef REMOVERCONTA_H
#define REMOVERCONTA_H

#include "../../Banco/bancoCentral.hpp"

class RemoverConta{
private:
  void setConta();
  void confirmarRemocao();
public:
  RemoverConta();
  ContaBancaria* contaSelecionada;
  int numeroDaConta;
  
};


#endif // !REMOVERCONTA_H