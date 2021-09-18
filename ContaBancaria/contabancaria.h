#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

class ContaBancaria{
public:
  ContaBancaria(int _numeroDaConta, double _saldo);
  virtual void sacar(double _valor) = 0;
  virtual void depositar(double _valor) = 0;
  virtual void transferir(double _valor, ContaBancaria* _conta) = 0;
  double getSaldo() const ; // TEMPORARIO PARA TESTE
  int getNumeroDaConta() const;
  ~ContaBancaria();

protected:
  int numeroDaConta;
  double saldo;

};

#endif // !CONTABANCARIA_H