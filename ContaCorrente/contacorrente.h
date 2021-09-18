#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.h"


class ContaCorrente:  public ContaBancaria{
public:
  static int getNumeroDeContas();
  
  ContaCorrente(int _numeroDaConta, double _saldo); 
  void sacar(double _valor);
  void depositar(double _valor);

  void mostrarDados();
private:
  static int numeroDeContas;
  double taxaDeOperacao = 0.2;

};  


#endif // !CONTACORRENTE_H