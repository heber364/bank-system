#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class ContaCorrente:  public ContaBancaria, public Imprimivel{
public:
  ContaCorrente(int , double); 

  void sacar(double);
  void depositar(double);
  void mostrarDados() const;
  
private:
  const double taxaDeOperacao = 0.01;
};  


#endif // !CONTACORRENTE_H