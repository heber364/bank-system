#include "contapoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){}; 

void ContaPoupanca::sacar(double _valor){
  if(_valor > this->saldo + this->limite){
    std::cout << "Valor de saque maior que o saldo e limite juntos!" << std::endl;
  }else if(_valor <= this->saldo){
    this->saldo = this->saldo - _valor;
  }else if(_valor > this->saldo){
    double* saldoAnterior = new(double);
    saldoAnterior = &this->saldo;
    this->saldo = this->saldo - _valor;
    _valor  = _valor -  *saldoAnterior;
    this->limite = this->limite - _valor;
    delete saldoAnterior;
  }
}

double ContaPoupanca::getLimite() const{
  return this->limite;
}