#include "contabancaria.h"
#include <iostream>

ContaBancaria::ContaBancaria(int numeroDaConta, double valor):numeroDaConta(numeroDaConta), saldo(valor){};

void ContaBancaria::sacar(double valor){
  if(valor > this->saldo){
    std::cout << "Valor de saque maior que o saldo!" << std::endl;
  }else{
    this->saldo = this->saldo - valor;
  }
}

void ContaBancaria::depositar(double valor){
  this->saldo = this->saldo + valor;
}

void ContaBancaria::transferir(double valor, ContaBancaria *conta){
  if(valor > this->saldo){                  //SE O VALOR DE TRANFERENCIA FOR MAIOR, DÁ ERRO
    std::cout << "Valor de transferencia maior que o saldo em conta!" << std::endl;
  }else if(conta == NULL){  //SE NÃO ENCONTRAR A CONTA, TB DÁ ERRO
    std::cout << "Conta a receber tranferencia nao encontrada" << std::endl;
  }else{
    this->saldo = this->saldo - valor;
    conta->saldo = conta->saldo + valor; 
  }
}

double ContaBancaria::getSaldo(){
  return this->saldo;
}