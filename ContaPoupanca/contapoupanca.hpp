#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaPoupanca: public ContaBancaria{
public:

  ContaPoupanca(int _numeroDaConta, double _saldo);
  void sacar(double _valor);
  void depositar(double _valor);
  

  double getLimite() const;

  void mostrarDados();

private:
  double limite;
};  

#endif // !CONTAPOUPANCA_H