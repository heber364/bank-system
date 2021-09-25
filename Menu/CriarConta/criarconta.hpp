#ifndef CRIARCONTA_H
#define CRIARCONTA_H

#include "../../Banco/banco.hpp"
#include "../../ContaCorrente/contacorrente.hpp"
#include "../../ContaPoupanca/contapoupanca.hpp"

#include "../../Banco/bancoCentral.hpp"

class CriarConta{
private:

  int tipoDeConta;
  std::string NomeDoUsuario;
    
  int numeroDaConta;
  double saldo;
  bool finalizado = false;
  bool confirmado1 = false;
  bool confirmado2 = false;
  int opt;
  int opt2;
  
public:
  CriarConta();
  ~CriarConta();
  void inserirDados(); 
  void confirmaDados();
  void setTipoDeConta();
  void printValorInvalido();

};

#endif // !CRIARCONTA_H