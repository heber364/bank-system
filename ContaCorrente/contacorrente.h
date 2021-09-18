#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.h"

class ContaCorrente: public ContaBancaria{
public:
  ContaCorrente(int _numeroDaConta, double _saldo); 
  void sacar(double _valor);

private:
  double taxaDeOperacao = 1.2;

};  


#endif // !CONTACORRENTE_H