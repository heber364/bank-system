#include "contabancaria.hpp"
#include <iostream>

//construtor
ContaBancaria::ContaBancaria(int _numeroDaConta, double _saldo):numeroDaConta(_numeroDaConta), saldo(_saldo){};

//metodo de sacar
void ContaBancaria::sacar(double _valor){
  if(_valor > this->saldo){
    std::cout << "Valor de saque maior que o saldo!" << std::endl;
  }else{
    this->saldo = this->saldo - _valor;
  }
}

//metodo de depositar
void ContaBancaria::depositar(double _valor){
  this->saldo = this->saldo + _valor;
}

//metodo de tranferir
void ContaBancaria::transferir(double _valor, ContaBancaria& _conta){
  if(_valor > this->saldo){                  //SE O VALOR DE TRANFERENCIA FOR MAIOR, DÁ ERRO
    std::cout << "Valor de transferencia maior que o saldo em conta!" << std::endl;
  }else{
    this->saldo = this->saldo - _valor;
    _conta.saldo = _conta.saldo + _valor; 
  }
}

//metodo que retorna tipo de conta
std::string ContaBancaria::getTipoDeConta() const{
  return this->TipoDeConta;
}

//metodo que retorna o saldo
double ContaBancaria::getSaldo() const{
  return this->saldo;
}

//metodo que retorna o saldo
double ContaBancaria::getLimite() const{
  return this->limite;
}

//metodo que retornar o numero da conta
int ContaBancaria::getNumeroDaConta() const{
  return this->numeroDaConta;
};

//destrutor
ContaBancaria::~ContaBancaria(){
  
};