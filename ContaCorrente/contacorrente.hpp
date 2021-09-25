#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.hpp"


class ContaCorrente:  public ContaBancaria{
public:
  ContaCorrente(int _numeroDaConta, double _saldo); 
  ~ContaCorrente();

  void sacar(double _valor);
  void depositar(double _valor);
  void mostrarDados() const;
  
private:
  double taxaDeOperacao = 0.01;

};  


#endif // !CONTACORRENTE_H