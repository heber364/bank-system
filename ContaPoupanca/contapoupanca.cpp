#include "contapoupanca.h"
#include <iostream>

//numero de contas intanciadas
int ContaPoupanca::numeroDeContas = 0;

//metodo de retornar numero de contas instanciadas
int ContaPoupanca::getNumeroDeContas(){return numeroDeContas;}

//construtor
ContaPoupanca::ContaPoupanca(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){
  numeroDeContas++;}; 

//metodo sacar
void ContaPoupanca::sacar(double _valor){
  if(_valor > this->saldo + this->limite){
    std::cout << "Valor de saque maior que o saldo e limite juntos!" << std::endl;
  }else if(_valor <= this->saldo){
    this->saldo = this->saldo - _valor;
  }else if(_valor > this->saldo){
    double saldoAnterior = this->saldo;

    this->saldo = this->saldo - _valor;
    _valor  = _valor - saldoAnterior;
    this->limite = this->limite - _valor;
    
  }
}

//metodo de retornar limite
double ContaPoupanca::getLimite() const{
  return this->limite;
}

//destrutor
ContaPoupanca::~ContaPoupanca(){numeroDeContas--;}; 