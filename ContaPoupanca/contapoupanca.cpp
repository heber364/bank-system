#include "contapoupanca.hpp"
#include <iostream>

//construtor
ContaPoupanca::ContaPoupanca(int _numeroDaConta, double _saldo): ContaBancaria( _numeroDaConta, _saldo){
  this->TipoDeConta = "Conta Poupanca";
}; 


//metodo sacar
void ContaPoupanca::sacar(double _valor){
    //se o valor a ser sacado for maior q o limite e o saldo junto, n executa o saque
  if (_valor < 0){
    std::cout << "O valor nao pode ser negativo! Favor, tente novamente" << std::endl;
  }else{

    //se o saldo ja estiver negativo
    if(this->saldo < 0){
      //se o valor é maior que 
      if(_valor > this->limite){
        std::cout << "Seu saldo já esta negativo e o valor e maior que o limite diponivel! " << std::endl;
        //se o valor a ser sacado for menor ou igual ao saldo, apenas o saldo será alterado
      }else if(_valor <= this->saldo){      
        this->saldo = this->saldo - _valor;
        //se o valor a ser sacado for maior que o saldo, a conta ficara com saldo negativo, e o valor que ultrapassar o saldo, o restante será descontado do limite
      }else if(_valor > this->saldo){       
        double saldoAnterior = this->saldo;
        this->saldo = this->saldo - _valor;
        _valor  = _valor - saldoAnterior;
        this->limite = this->limite - _valor;
    
    //se o saldo não estiver negativo
    }else{
      //se o valor é maior que o saldo e o limite juntos
      if(_valor > this->saldo + this->limite){
        std::cout << "Valor de saque maior que o saldo e limite juntos!" << std::endl;
        //se o valor a ser sacado for menor ou igual ao saldo, apenas o saldo será alterado
      }else if(_valor <= this->saldo){      
        this->saldo = this->saldo - _valor;
        //se o valor a ser sacado for maior que o saldo, a conta ficara com saldo negativo, e o valor que ultrapassar o saldo, o restante será descontado do limite
      }else if(_valor > this->saldo){       
        double saldoAnterior = this->saldo;
        this->saldo = this->saldo - _valor;
        _valor  = _valor - saldoAnterior;
        this->limite = this->limite - _valor;
      } 
    }
     
  }
  
}
}


//metodo de depositar
void ContaPoupanca::depositar(double _valor){
  //se o saldo for positivo, acrescenta o valor sacado direto na conbta
  if (this->saldo >= 0){
    this->saldo = this->saldo + _valor;
  }else{
      //se o valor depositado + o limite disponível for menor que ou igual a zero 1000, significa que ele ainda ficará com saldo negativo, ou, no máximo,  igual a zero
      if(_valor + this->limite <=1000){
        this->limite = this->limite + _valor;
        this->saldo = this->saldo + _valor;
      //se o valor depositado for suficiente para tirar o saldo do negativo, o limite voltará a ser 1000 reais, e o saldo será positivo novamente
      }else if(_valor + this->limite > 1000){
        this->saldo = this->saldo + _valor;
        this->limite = 1000;
      }
  }
}

//metodo que retorna o saldo
double ContaPoupanca::getLimite() const{
  return this->limite;
}


//metodo de mostrar dados
void ContaPoupanca::mostrarDados() const{
  std::cout << "==========================================" << std::endl;
  std::cout << "Tipo de conta:   " << this->getTipoDeConta() << std::endl;
  std::cout << "Numero da conta: " << this->getNumeroDaConta() << std::endl;
  std::cout << "Saldo:           " << this->getSaldo() << std::endl;
  std::cout << "Limite:          " << this->getLimite() << std::endl;
  std::cout << "==========================================" << std::endl;

}
