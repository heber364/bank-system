#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.hpp"


class ContaCorrente:  public ContaBancaria{
public:
  ContaCorrente(int _numeroDaConta, double _saldo); 
  ~ContaCorrente();

  void sacar(double _valor);
  void depositar(double _valor);
  void mostrarDados();
  
  static int getNumeroDeContas();
private:
  double taxaDeOperacao = 0.2;
  static int numeroDeContas;

};  


#endif // !CONTACORRENTE_H