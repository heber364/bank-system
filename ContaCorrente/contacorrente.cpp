#include "contacorrente.hpp"
#include <iostream>

//construtor
ContaCorrente::ContaCorrente(int _numeroDaConta, double _saldo) : ContaBancaria( _numeroDaConta, _saldo){
  this->TipoDeConta = "Conta Corrente";
}; 


//metodo de sacar
void ContaCorrente::sacar(double _valor){
  if((_valor * (1 + this->taxaDeOperacao)) > this->saldo){
    std::cout << "Valor de (saque + taxa) maior que o saldo!"            << std::endl;
  }else{
    this->saldo = this->saldo - ((this->taxaDeOperacao + 1) *_valor);
    std::cout << "Saque de R$" << _valor << " realizado com sucesso!"    << std::endl;
    std::cout << "====================================="                 << std::endl;
    std::cout << "Saldo atual:    " << this->saldo                       << std::endl;
    std::cout << "====================================="                 << std::endl;
    system("pause");
    system("cls");
  }
}


//metodo de depositar
void ContaCorrente::depositar(double _valor){
  this->saldo = this->saldo + (_valor - (this->taxaDeOperacao * _valor));
  std::cout << "Deposito de R$" << _valor << " realizado com sucesso!" << std::endl;
  std::cout << "====================================="                 << std::endl;
  std::cout << "Saldo atual:    " << this->saldo                       << std::endl;
  std::cout << "====================================="                 << std::endl;
  system("pause");
  system("cls");
}


//metodo de mostrar dados
void ContaCorrente::mostrarDados() const{
  std::cout << "==========================================" << std::endl;
  std::cout << "Tipo de conta:    " << this->TipoDeConta     << std::endl;
  std::cout << "Numero da conta:  " << this->numeroDaConta   << std::endl;
  std::cout << "Saldo:            " << this->saldo           << std::endl;
  std::cout << "Taxa de operacao: " << this->taxaDeOperacao  << std::endl;
  std::cout << "==========================================" << std::endl;
}