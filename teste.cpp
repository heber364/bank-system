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

//ContaBancaria* heber = new ContaBancaria(123, 200);
// ContaBancaria thaua(321, 50);

// std::cout << "Saldo " << heber.getSaldo() << std::endl;
// std::cout << "Saldo " << thaua.getSaldo() << std::endl;
// heber.transferir(50, &thaua);
// std::cout << "Saldo " << heber.getSaldo() << std::endl;
// std::cout << "Saldo " << thaua.getSaldo() << std::endl;

ContaCorrente* heber2 = new ContaCorrente(1234, 100);
// std::cout << "Saldo " << heber2.getSaldo() << std::endl;
// heber2.sacar(50);
//std::cout << "Saldo " << heber2.getSaldo() << std::endl;

ContaPoupanca* heber3 = new ContaPoupanca(12345, 250);
// heber3.sacar(1251);
// std::cout << "Saldo: " << heber3.getSaldo() << std::endl;
// std::cout << "Saldo de credito: " << heber3.getLimite() << std::endl;

Imprimivel tabela;
tabela.mostrarDados(heber3);
tabela.mostrarDados(heber2);
return 0;
}