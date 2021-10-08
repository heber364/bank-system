#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>

class ContaBancaria{
public:
  ContaBancaria(int _numeroDaConta, double _saldo);

  virtual void sacar(double _valor) = 0 ;
  virtual void depositar(double _valor) = 0;
  void transferir(double _valor, ContaBancaria& _conta);

  int getNumeroDaConta() const;
  double getSaldo() const; 
  std::string getTipoDeConta() const;

  void setTipoDeConta(std::string _tipoDeConta);

  virtual void mostrarDados() const;//////////////////////
  
protected:
  std::string TipoDeConta;
  int numeroDaConta;
  double saldo;


};

#endif // !CONTABANCARIA_H