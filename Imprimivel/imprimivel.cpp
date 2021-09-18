#include "imprimivel.hpp"
#include <iostream>
#include <string>
#include <typeinfo>

template <class CONTA_BANCARIA>
Imprimivel::Imprimivel(CONTA_BANCARIA* _conta){
  // this->tipoDeConta = std::to_string(typeid(&_conta).name());
  this->numeroDaConta = _conta->getNumeroDaConta();
  this->saldo = _conta->getSaldo();
  this->limite = _conta->getLimite();  
};


void Imprimivel::mostrarDados(){ 
  std::cout << "Tipo de Conta: " << "Generico" << std::endl;
  // std::cout << "Tipo de Conta -  " << tipoDeConta << std::endl;
  std::cout << "Numero da Conta: " << this->numeroDaConta << std::endl;
  std::cout << "Saldo da Conta: " << this->saldo << std::endl;
  std::cout << "Limite da Conta: " << this->limite << std::endl;
}

