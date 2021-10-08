#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaPoupanca: public ContaBancaria{
public:

  ContaPoupanca(int _numeroDaConta, double _saldo);
  void sacar(double _valor);
  void depositar(double _valor);
  void mostrarDados();
};  

#endif // !CONTAPOUPANCA_H