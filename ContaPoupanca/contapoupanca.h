#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.h"

class ContaPoupanca: public ContaBancaria{
public:
  ContaPoupanca(int _numeroDaConta, double _saldo); 
  virtual void sacar(double _valor);
  double getLimite() const;

private:
  double limite = 1000.00;

};  

#endif // !CONTAPOUPANCA_H