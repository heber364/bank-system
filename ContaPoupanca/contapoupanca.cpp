#include "contapoupanca.hpp"
#include <iostream>

//construtor
ContaPoupanca::ContaPoupanca(int _numeroDaConta, double _saldo): ContaBancaria( _numeroDaConta, _saldo){
  this->TipoDeConta = "Conta Poupanca";
  this->limite = 1000.00;
}; 


//metodo sacar
void ContaPoupanca::sacar(double _valor){
    //se o valor a ser sacado for maior q o limite e o saldo junto, n executa o saque
  if(_valor > this->saldo + this->limite){
    std::cout << "Valor de saque maior que o saldo e limite juntos!" << std::endl;
    //se o valor a ser sacado for menor ou igual ao saldo, apenas o saldo será alterado
  }else if(_valor <= this->saldo){      
    this->saldo = this->saldo - _valor;
    //se o valor a ser sacado for maior que o saldo, a conta ficara com saldo negativo, e o valor que ultrapasasr o saldo será descontado do limite
  }else if(_valor > this->saldo){       
    double saldoAnterior = this->saldo;

    this->saldo = this->saldo - _valor;
    _valor  = _valor - saldoAnterior;
    this->limite = this->limite - _valor;
    
  }
}


//metodo de depositar
void ContaPoupanca::depositar(double _valor){
  this->saldo = this->saldo + _valor;
}

//metodo que retorna o saldo
double ContaPoupanca::getLimite() const{
  return this->limite;
}


//metodo de mostrar dados
void ContaPoupanca::mostrarDados(){
  std::cout << "==========================================" << std::endl;
  std::cout << "Tipo de conta:   " << this->getTipoDeConta() << std::endl;
  std::cout << "Numero da conta: " << this->getNumeroDaConta() << std::endl;
  std::cout << "Saldo:           " << this->getSaldo() << std::endl;
  std::cout << "Limite:          " << this->getLimite() << std::endl;
  std::cout << "==========================================" << std::endl;

}
