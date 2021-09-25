#include "contacorrente.hpp"
#include <iostream>




//construtor
ContaCorrente::ContaCorrente(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){
  this->TipoDeConta = "Conta Corrente";
  this->limite = 0;
}; 

//metodo de sacar
void ContaCorrente::sacar(double _valor){
  if(_valor > this->saldo){
    std::cout << "Valor de saque maior que o saldo!" << std::endl;
  }else{
    this->saldo = this->saldo - ((this->taxaDeOperacao + 1)*_valor);
  }
}

//metodo de depositar
void ContaCorrente::depositar(double _valor){
  this->saldo = this->saldo + (_valor - (this->taxaDeOperacao * _valor));
}

//metodo de mostrar dados
void ContaCorrente::mostrarDados() const{
  std::cout << "==========================================" << std::endl;
  std::cout << "Tipo de conta:   " << this->getTipoDeConta() << std::endl;
  std::cout << "Numero da conta: " << this->getNumeroDaConta() << std::endl;
  std::cout << "Saldo:           " << this->getSaldo() << std::endl;
  std::cout << "==========================================" << std::endl;

}

//destrutor
ContaCorrente::~ContaCorrente(){};