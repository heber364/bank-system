#ifndef IMPRIMIVEL_H
#define IMPRIMIVEL_H

#include "../ContaBancaria/contabancaria.h"
#include "../ContaPoupanca/contapoupanca.h"
#include "../ContaCorrente/contacorrente.h"
//usar template aqui

class Imprimivel{
private:
  Imprimivel();
public:
  void mostrarDados();
  void mostrarDados(ContaCorrente* _conta);
  void mostrarDados(ContaPoupanca* _conta);
  

};

#endif // !IMPRIMIVEL_H