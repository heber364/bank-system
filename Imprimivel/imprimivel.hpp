#ifndef IMPRIMIVEL_H
#define IMPRIMIVEL_H

#include "../ContaBancaria/contabancaria.hpp"
#include "../ContaPoupanca/contapoupanca.hpp"
#include "../ContaCorrente/contacorrente.hpp"
//usar template aqui


class Imprimivel{
private:
  
public:
  template <class CONTA_BANCARIA>
  Imprimivel(CONTA_BANCARIA _conta);

  template <class CONTA_BANCARIA>
  void mostrarDados(CONTA_BANCARIA _conta);

};

#endif // !IMPRIMIVEL_H