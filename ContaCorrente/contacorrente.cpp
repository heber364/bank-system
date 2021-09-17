#include "contacorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(int numeroDaConta, double valor):numeroDaConta(numeroDaConta), saldo(valor){};

void ContaCorrente::sacar(double valor){
  if(valor > this->saldo){
    std::cout << "Valor de saque maior que o saldo!" << std::endl;
  }else{
    this->saldo = this->saldo - valor*this->taxaDeOperacao;
  }
}