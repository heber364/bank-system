#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaPoupanca: public ContaBancaria{
public:
  ContaPoupanca(int _numeroDaConta, double _saldo);
  ~ContaPoupanca();

  void sacar(double _valor);
  static int getNumeroDeContas();
private:
  static int numeroDeContas;
  
};  

#endif // !CONTAPOUPANCA_H