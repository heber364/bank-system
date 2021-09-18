#ifndef IMPRIMIVEL_H
#define IMPRIMIVEL_H

#include "../ContaBancaria/contabancaria.h"
#include "../ContaPoupanca/contapoupanca.h"
#include "../ContaCorrente/contacorrente.h"
//usar template aqui
class Imprimivel:  public ContaBancaria{
private:
  
public:
  Imprimivel();
   void mostrarDados(ContaBancaria* _conta);

  

};

#endif // !IMPRIMIVEL_H