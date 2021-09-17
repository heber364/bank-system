#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

class ContaBancaria{
public:
  ContaBancaria(int, double);
  void sacar(double);
  void depositar(double);
  void transferir(double, ContaBancaria*);
  double getSaldo(); // TEMPORARIO PARA TESTE

protected:
  int numeroDaConta;
  double saldo;

};

#endif // !CONTABANCARIA_H