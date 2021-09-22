#include "contacorrente.hpp"
#include <iostream>

//numero de contas intanciadas
int ContaCorrente::numeroDeContas = 0;

//metodo que retorna numero de contas intanciadas
int ContaCorrente::getNumeroDeContas(){return numeroDeContas;}

//construtor
ContaCorrente::ContaCorrente(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){
  this->TipoDeConta = "Conta Corrente";
  this->limite = 0;
  numeroDeContas++;}; 

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
void ContaCorrente::mostrarDados(){
  std::cout << "Tipo de Conta: " << "Conta Corrente" << std::endl;
  std::cout << "Numero da Conta: " << this->getNumeroDaConta() << std::endl;
  std::cout << "Saldo da Conta: " << this->getSaldo() << std::endl;
}

//destrutor
ContaCorrente::~ContaCorrente(){numeroDeContas--;};