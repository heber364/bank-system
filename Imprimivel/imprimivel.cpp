#include "imprimivel.h"
#include <iostream>
#include <typeinfo>

Imprimivel::Imprimivel(){};

void Imprimivel::mostrarDados(ContaCorrente* _conta){
  std::cout << "Tipo de Conta: " << typeid(_conta).name() << std::endl;
  std::cout << "Numero da Conta: " << _conta->getNumeroDaConta() << std::endl;
  std::cout << "Saldo da Conta: " << _conta->getSaldo() << std::endl;
}

// void Imprimivel::mostrarDados(ContaPoupanca* _conta){
//   std::cout << "Tipo de Conta: " << typeid(_conta).name() << std::endl;
//   std::cout << "Numero da Conta: " << _conta->getNumeroDaConta() << std::endl;
//   std::cout << "Saldo da Conta: " << _conta->getSaldo() << std::endl;
// }