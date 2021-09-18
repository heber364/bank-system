#include "contabancaria.h"
#include <iostream>

ContaBancaria::ContaBancaria(int _numeroDaConta, double _saldo):numeroDaConta(_numeroDaConta), saldo(_saldo){};

void ContaBancaria::sacar(double _valor){
  if(_valor > this->saldo){
    std::cout << "Valor de saque maior que o saldo!" << std::endl;
  }else{
    this->saldo = this->saldo - _valor;
  }
}

void ContaBancaria::depositar(double _valor){
  this->saldo = this->saldo + _valor;
}

void ContaBancaria::transferir(double _valor, ContaBancaria* _conta){
  if(_valor > this->saldo){                  //SE O VALOR DE TRANFERENCIA FOR MAIOR, DÁ ERRO
    std::cout << "Valor de transferencia maior que o saldo em conta!" << std::endl;
  }else if(_conta == NULL){  //SE NÃO ENCONTRAR A CONTA, TB DÁ ERRO
    std::cout << "Conta a receber tranferencia nao encontrada" << std::endl;
  }else{
    this->saldo = this->saldo - _valor;
    _conta->saldo = _conta->saldo + _valor; 
  }
}

double ContaBancaria::getSaldo() const{
  return this->saldo;
}

int ContaBancaria::getNumeroDaConta() const{
  return this->numeroDaConta;
};

ContaBancaria::~ContaBancaria(){
  std::cout << "Objeto destruido" << std::endl;
};