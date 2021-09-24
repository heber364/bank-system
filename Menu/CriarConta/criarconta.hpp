#ifndef CRIARCONTA_H
#define CRIARCONTA_H
#include "../../ContaCorrente/contacorrente.hpp"
#include "../../ContaPoupanca/contapoupanca.hpp"
#include "../../Banco/banco.hpp"

class CriarConta{
private:
  std::string tipoDeConta;
public:
  CriarConta(std::string _tipoDeConta, Banco*);
  ~CriarConta();
};

#endif // !CRIARCONTA_H