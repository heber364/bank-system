#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>

class ContaBancaria{
public:
  ContaBancaria(int _numeroDaConta, double _saldo);
  ~ContaBancaria();

  virtual void sacar(double _valor);
  virtual void depositar(double _valor);
  void transferir(double _valor, ContaBancaria& _conta);
  
  std::string getTipoDeConta() const;
  double getSaldo() const; // TEMPORARIO PARA TESTE
  double getLimite() const;
  int getNumeroDaConta() const;

protected:
  std::string TipoDeConta;
  int numeroDaConta;
  double saldo;
  double limite;

};

#endif // !CONTABANCARIA_H