#include <iostream>

#include "ContaBancaria/contabancaria.hpp"
#include "ContaBancaria/contabancaria.cpp"

#include "ContaCorrente/contacorrente.hpp"
#include "ContaCorrente/contacorrente.cpp"

#include "ContaPoupanca/contapoupanca.hpp"
#include "ContaPoupanca/contapoupanca.cpp"

#include "Imprimivel/imprimivel.hpp"
#include "Imprimivel/imprimivel.cpp"

#include "Banco/banco.hpp"
#include "Banco/banco.cpp"
// #include "Relatorio/relatorio.hpp"
// #include "Relatorio/relatorio.cpp"

int main(){
ContaCorrente* heber2 = new ContaCorrente(123, 100);
// std::cout << "Saldo " << heber2->getSaldo() << std::endl;
// heber2->sacar(50);
// std::cout << "Saldo " << heber2->getSaldo() << std::endl;

ContaPoupanca* heber3 = new ContaPoupanca(321, 250);
// heber3->sacar(1250);
// std::cout << "Saldo: " << heber3->getSaldo() << std::endl;
// std::cout << "Saldo de credito: " << heber3->getLimite() << std::endl;

// std::cout << heber2->getLimite() << std::endl;
// std::cout << heber3->getLimite() << std::endl;

// Imprimivel tabela(heber2);
// Imprimivel tabela2(heber3);

// tabela2.mostrarDados();

Banco BancoDoBrasil;

BancoDoBrasil.inserir(heber2);
BancoDoBrasil.inserir(heber3);
std::vector<ContaBancaria> contasDoBNB = BancoDoBrasil.getContasBancarias();

for (int i = 0; i < contasDoBNB.size(); i++){
  std::cout << "Numero da conta "<< i+1 << ": "<< contasDoBNB[i].getNumeroDaConta() << std::endl;
}


return 0;
}