#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaCorrente:  public ContaBancaria, public Imprimivel{
public:
  ContaCorrente(int _numeroDaConta, double _saldo); 

  void sacar(double _valor);
  void depositar(double _valor);
  void mostrarDados();
  
private:
  double taxaDeOperacao = 0.01;

};  


#endif // !CONTACORRENTE_H