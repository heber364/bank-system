#include <iostream>
#include <math.h>
#include <vector>

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



  CriarConta criarConta("conta-corrente");


  // std::cout << "Numero das contas: " << std::endl;
  // for (int i = 0; i < bancoCentral.ContasBancarias.size(); i++){
  //   std::cout << bancoCentral.ContasBancarias[i]->getNumeroDaConta() << std::endl;
  // }
  
  // c_aux[1] = bancoCentral.procurar(123);

  // std::cout << c_aux[1]->getSaldo();

 SelecionarConta selecionarConta;
  
  return 0;
}
