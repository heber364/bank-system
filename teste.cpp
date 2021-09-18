#include <iostream>

#include "ContaBancaria/contabancaria.h"
#include "ContaBancaria/contabancaria.cpp"

#include "ContaCorrente/contacorrente.h"
#include "ContaCorrente/contacorrente.cpp"

#include "ContaPoupanca/contapoupanca.h"
#include "ContaPoupanca/contapoupanca.cpp"

#include "Imprimivel/imprimivel.h"
#include "Imprimivel/imprimivel.cpp"

int main(){
ContaCorrente* heber2 = new ContaCorrente(1234, 100);
// std::cout << "Saldo " << heber2->getSaldo() << std::endl;
// heber2->sacar(50);
// std::cout << "Saldo " << heber2->getSaldo() << std::endl;

ContaCorrente* heber3 = new ContaCorrente(12345, 250);
// heber3->sacar(1250);
// std::cout << "Saldo: " << heber3->getSaldo() << std::endl;
// std::cout << "Saldo de credito: " << heber3->getLimite() << std::endl;

heber2->mostrarDados();

std::cout << "Numero de contas correntes: " << ContaCorrente::getNumeroDeContas();

return 0;
}