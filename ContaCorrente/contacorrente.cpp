#include "contacorrente.h"
#include <iostream>


int ContaCorrente::numeroDeContas = 0;
int ContaCorrente::getNumeroDeContas(){return numeroDeContas;}

ContaCorrente::ContaCorrente(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){numeroDeContas++;}; 

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

void ContaCorrente::mostrarDados(){
  std::cout << "Tipo de Conta: " << "Conta Corrente" << std::endl;
  std::cout << "Numero da Conta: " << this->getNumeroDaConta() << std::endl;
  std::cout << "Saldo da Conta: " << this->getSaldo() << std::endl;
}