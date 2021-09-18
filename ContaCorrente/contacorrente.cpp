#include "contacorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){}; 

void ContaCorrente::sacar(double _valor){
  if(_valor > this->saldo){
    std::cout << "Valor de saque maior que o saldo!" << std::endl;
  }else{
    this->saldo = this->saldo - ((this->taxaDeOperacao + 1)*_valor);
  }
}

void ContaCorrente::depositar(double _valor){
  this->saldo = this->saldo + (_valor - (this->taxaDeOperacao * _valor));
}