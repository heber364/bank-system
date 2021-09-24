#include <iostream>

#include <iostream>

#include "../ContaBancaria/contabancaria.hpp"
#include "../ContaBancaria/contabancaria.cpp"

#include "../ContaCorrente/contacorrente.hpp"
#include "../ContaCorrente/contacorrente.cpp"

#include "../ContaPoupanca/contapoupanca.hpp"
#include "../ContaPoupanca/contapoupanca.cpp"

#include "../Imprimivel/imprimivel.hpp"
#include "../Imprimivel/imprimivel.cpp"

#include "../Banco/banco.hpp"
#include "../Banco/banco.cpp"

#include "../Executavel/executavel.hpp"
#include "../Executavel/executavel.cpp"

#include "../Relatorio/relatorio.hpp"
#include "../Relatorio/relatorio.cpp"

#include "CriarConta/criarconta.hpp"
#include "CriarConta/criarconta.cpp"

#include "SelecionarConta/selecionarconta.hpp"
#include "SelecionarConta/selecionarconta.cpp"

int main(){
  Banco bancoCentral;
  CriarConta criarConta("conta-corrente", &bancoCentral);
  
  std::cout << bancoCentral.getContasBancarias().size();

  system("CLS");

  for (int i = 0; i < bancoCentral.getContasBancarias().size(); i++){
    std::cout << bancoCentral.getContasBancarias()[i].getNumeroDaConta() << std::endl;
  }

  SelecionarConta selecionarConta(bancoCentral);

  return 0;
}
