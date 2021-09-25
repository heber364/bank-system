#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>

class ContaBancaria{
public:
  ContaBancaria(int _numeroDaConta, double _saldo);
  ~ContaBancaria();

  virtual void sacar(double _valor);
  virtual void depositar(double _valor);
  virtual void mostrarDados() const;
  
  void transferir(double _valor, ContaBancaria& _conta);
  
  int getNumeroDaConta() const;
  double getSaldo() const; 
  double getLimite() const;

  std::string getTipoDeConta() const;
  void setTipoDeConta(std::string _tipoDeConta);
    

protected:
  std::string TipoDeConta;
  int numeroDaConta;
  double saldo;
  double limite;

};

#endif // !CONTABANCARIA_H