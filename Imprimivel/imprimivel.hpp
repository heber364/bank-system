#ifndef IMPRIMIVEL_H
#define IMPRIMIVEL_H
#include <string>
#include "../ContaBancaria/contabancaria.hpp"
#include "../ContaPoupanca/contapoupanca.hpp"
#include "../ContaCorrente/contacorrente.hpp"
//usar template aqui


class Imprimivel{
private:
  void tipoDeConta();
  int numeroDaConta;
  double saldo;
  double limite;

public:
  template <class CONTA_BANCARIA>
  Imprimivel(CONTA_BANCARIA* _conta);

  void mostrarDados();

};

#endif // !IMPRIMIVEL_H