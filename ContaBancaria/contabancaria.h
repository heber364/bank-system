#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

class ContaBancaria{
public:
  ContaBancaria(int _numeroDaConta, double _saldo);
  virtual void sacar(double _valor);
  virtual void depositar(double _valor);
  void transferir(double _valor, ContaBancaria* _conta);
  double getSaldo() const; // TEMPORARIO PARA TESTE
  int getNumeroDaConta() const;
  ~ContaBancaria();

protected:
  int numeroDaConta;
  double saldo;

};

#endif // !CONTABANCARIA_H