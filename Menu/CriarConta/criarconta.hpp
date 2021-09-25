#ifndef CRIARCONTA_H
#define CRIARCONTA_H

#include "../../Banco/banco.hpp"
#include "../../ContaCorrente/contacorrente.hpp"
#include "../../ContaPoupanca/contapoupanca.hpp"

#include "../menu.h"

class CriarConta{
private:
  std::string tipoDeConta;
  std::string NomeDoUsuario;

  int numeroDaConta;
  double saldo;
  bool finalizado = false;
  bool confirmado1 = false;
  bool confirmado2 = false;
  int opt;
  int opt2;
  
public:
  CriarConta(std::string _tipoDeConta);
  ~CriarConta();
  void inserirDados(); 
  void confirmaDados();

};

#endif // !CRIARCONTA_H