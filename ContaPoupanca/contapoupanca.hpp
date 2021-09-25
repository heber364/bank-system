#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaPoupanca: public ContaBancaria{
public:
  ContaPoupanca(int _numeroDaConta, double _saldo);
  ~ContaPoupanca();
  void sacar(double _valor);
  void mostrarDados() const;

  
};  

#endif // !CONTAPOUPANCA_H