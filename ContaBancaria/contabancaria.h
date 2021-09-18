#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

class ContaBancaria{
public:
  ContaBancaria(int _numeroDaConta, double _saldo);
  void sacar(double _valor);
  void depositar(double _valor);
  void transferir(double _valor, ContaBancaria* _conta);
  double getSaldo(); // TEMPORARIO PARA TESTE
  ~ContaBancaria();

protected:
  int numeroDaConta;
  double saldo;

};

#endif // !CONTABANCARIA_H