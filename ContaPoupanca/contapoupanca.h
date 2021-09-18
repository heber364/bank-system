#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.h"


class ContaPoupanca: public ContaBancaria{
public:
  static int getNumeroDeContas();
  
  ContaPoupanca(int _numeroDaConta, double _saldo); 
  void sacar(double _valor);
  double getLimite() const;

private:
  static int numeroDeContas;
  double limite = 1000.00;

};  

#endif // !CONTAPOUPANCA_H