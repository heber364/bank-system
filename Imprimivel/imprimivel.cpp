#include "imprimivel.h"
#include <iostream>
#include <string>
#include <typeinfo>

template <class CONTA_BANCARIA>
Imprimivel::Imprimivel(CONTA_BANCARIA _conta){
  mostrarDados(_conta);
};

template <class CONTA_BANCARIA>
void Imprimivel::mostrarDados(CONTA_BANCARIA _conta){ 
  std::cout << "Tipo de Conta: " << typeid(&_conta).name() << std::endl;
  // std::cout << "Tipo de Conta -  " << tipoDeConta << std::endl;
  std::cout << "Numero da Conta: " << _conta->getNumeroDaConta() << std::endl;
  std::cout << "Saldo da Conta: " << _conta->getSaldo() << std::endl;
}

