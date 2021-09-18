#include "imprimivel.h"
#include <iostream>
#include <typeinfo>

Imprimivel::Imprimivel(): ContaBancaria(numeroDaConta, saldo){};

void Imprimivel::mostrarDados(ContaBancaria* _conta){
  std::cout << "Tipo de Conta: " << typeid(_conta).name() << std::endl;
  std::cout << "Numero da Conta: " << _conta->getNumeroDaConta() << std::endl;
  std::cout << "Saldo da Conta: " << _conta->getSaldo() << std::endl;
}


