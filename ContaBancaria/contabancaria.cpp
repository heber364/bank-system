#include "contabancaria.hpp"
#include <iostream>

//construtor
ContaBancaria::ContaBancaria(int _numeroDaConta, double _saldo):numeroDaConta(_numeroDaConta), saldo(_saldo){};


//metodo de tranferir
void ContaBancaria::transferir(double _valor, ContaBancaria& _conta){
  if(_valor > this->saldo){                  //SE O VALOR DE TRANFERENCIA FOR MAIOR, DÁ ERRO
    std::cout << "Valor de transferencia maior que o saldo em conta!" << std::endl;
  }else{
    this->saldo = this->saldo - _valor;
    _conta.saldo = _conta.saldo + _valor;
    std::cout << "Transferencia de R$" << _valor << " realizada com sucesso!"                                        << std::endl;
    std::cout << "====================================="                                                             << std::endl;
    std::cout << "Conta remetente: " << this->numeroDaConta << "Conta destinataria: " << _conta.getNumeroDaConta()   << std::endl;
    std::cout << "Saldo atual:     " << this->saldo                                                                  << std::endl;
    std::cout << "====================================="                                                             << std::endl; 

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


//metodo que seta o tipo de conta
void ContaBancaria::setTipoDeConta(std::string _tipoDeConta){
  this->TipoDeConta = _tipoDeConta;
}


//metodo que retornar o numero da conta
int ContaBancaria::getNumeroDaConta() const{
  return this->numeroDaConta;
};


void ContaBancaria::mostrarDados() const{};