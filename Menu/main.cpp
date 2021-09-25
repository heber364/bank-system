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

// #include "SelecionarConta/selecionarconta.hpp"
// #include "SelecionarConta/selecionarconta.cpp"

int main(){
  Banco bancoCentral;
  // CriarConta criarConta("conta-corrente", &bancoCentral);
  
  // std::cout << bancoCentral.getContasBancarias().size();

  // system("CLS");

  // for (int i = 0; i < bancoCentral.getContasBancarias().size(); i++){
  //   std::cout << bancoCentral.getContasBancarias()[i].getNumeroDaConta() << std::endl;
  // }
  std::vector<ContaBancaria*> c_aux; 

  ContaCorrente heber2(123, 100);
  ContaPoupanca heber3(321, 250);
  
  bancoCentral.inserir(&heber2);
  bancoCentral.inserir(&heber3);
  // heber2.sacar(20);
  // heber2.getSaldo();

  // bancoCentral.getContasBancarias()[0].sacar(20);
  // std::cout << "Saldo anterior: " <<heber2.getSaldo() << std::endl; 
  c_aux[1] = bancoCentral.procurar(123);
  
  

  std::cout << "Saldo atual:" << c_aux[1]->getSaldo() << std::endl; 

  // (bancoCentral.getContasBancarias()[1]).sacar(50.00);
  // std::cout << "Saldo anterior: " <<bancoCentral.getContasBancarias()[1].getSaldo() << std::endl; 

  // SelecionarConta selecionarConta(bancoCentral);

  return 0;
}
