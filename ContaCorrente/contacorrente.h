#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.h"

class ContaCorrente: public ContaBancaria{
public:
  ContaCorrente(int, double);
  void sacar(double);
private:
  float taxaDeOperacao = 1.2;
};  


#endif // !CONTACORRENTE_H