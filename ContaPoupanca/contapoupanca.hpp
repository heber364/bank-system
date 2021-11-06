#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaPoupanca: public ContaBancaria, public Imprimivel{
public:
  ContaPoupanca(int, double);
  
  void sacar(double);
  void depositar(double);
  
  double getLimite() const;
  void mostrarDados() const;

private:
  double limite = 1000;
};  

#endif // !CONTAPOUPANCA_H