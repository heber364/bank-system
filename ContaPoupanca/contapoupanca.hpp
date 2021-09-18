#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaPoupanca: public ContaBancaria{
public:
  ContaPoupanca(int _numeroDaConta, double _saldo);
  ~ContaPoupanca();

  void sacar(double _valor);
  double getLimite() const;
  
  static int getNumeroDeContas();
private:
  double limite = 1000.00;
  static int numeroDeContas;
  
};  

#endif // !CONTAPOUPANCA_H